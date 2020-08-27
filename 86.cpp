#include<stdio.h>
#include<math.h>
typedef struct sanpham{
    int id;
	char ten[1000];
	float nhap,xuat;	
}sp;
const int size = sizeof(sp);
int update(){
	FILE *f = fopen("qwe.bin","rb+");
	fseek(f,0,SEEK_END);
	int cnt = ftell(f) / size;
	fclose(f);
	return cnt;
}
void addnew(int n){
	FILE  *f = fopen("qwe.bin","ab+");
	int cnt = update();
	for(int i =1;i<=n;i++){
		sp x;
		x.id = cnt + i;
		getchar();
		gets(x.ten);
		scanf("%f%f",&x.nhap,&x.xuat);
		fseek(f,0,SEEK_END);
		fwrite(&x,size,1,f);
	}
	fclose(f);
	printf("%d\n",n);
}
void edit(int n){
	FILE *f = fopen("qwe.bin","rb+");
	sp x;
	x.id = n;
	fseek(f,size*(n-1),SEEK_SET);
	getchar();
	gets(x.ten);
	scanf("%f%f",&x.nhap,&x.xuat);
	fseek(f,size*(n-1),SEEK_SET);
	fwrite(&x,size,1,f);
	fclose(f);
	printf("%d\n",x.id);
}
void show(){
	FILE *f = fopen("qwe.bin","rb+");
	sp x;
	int n = update();
	sp h[n];
	int i =0;
	while(fread(&x,size,1,f)){
		h[i++] = x;
	}
	for(int i = 0;i<n-1;i++){
		for(int j =0;j<n-i-1;j++){
			if(abs(h[j].nhap - h[j].xuat) < abs(h[j+1].nhap - h[j+1].xuat)){
				sp tmp = h[j];
				h[j] = h[j+1];
				h[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d %s %0.2f %0.2f\n",h[i].id,h[i].ten,h[i].nhap,h[i].xuat);
	}
	fclose(f);
}
int main(){
	int chon;
	scanf("%d",&chon);
	if(chon ==1){
		int n;
		scanf("%d",&n);
		addnew(n);
	}
	else if(chon ==2){
		int n;
		scanf("%d",&n);
		edit(n);
	}
	else if(chon == 3){
		show();
	}
}
