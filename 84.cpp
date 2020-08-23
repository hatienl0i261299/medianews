#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    float diem_a;
    float diem_b;
    float diem_c;
}sinh_vien;
int update()
{
    int count=0;
    FILE *f=fopen("abc.bin","rb");
    if(f!=NULL){
        int c=fgetc(f);
        while(c!=EOF){
            count++;
            fseek(f,sizeof(sinh_vien)*count,SEEK_SET);
            c=fgetc(f);
        }
    }
    fclose(f);
    return count;
}
int append(int n)
{
    int number=update();
    FILE *f=fopen("abc.bin","ab+");
    for(int i=0;i<n;i++){
        sinh_vien temp;
        temp.id=++number;
        int c;
        while((c=getchar())!='\n');
        gets(temp.name);
        scanf("%f%f%f",&temp.diem_a,&temp.diem_b,&temp.diem_c);
        fwrite(&temp,sizeof(sinh_vien),1,f);
    }
    fclose(f);
    return n;
}
void modify(int num)
{
    FILE *f=fopen("abc.bin","rb+");
    sinh_vien temp;
    temp.id=num--;
    int c;
    while((c=getchar())!='\n');
    gets(temp.name);
    scanf("%f%f%f",&temp.diem_a,&temp.diem_b,&temp.diem_c);
    fseek(f,sizeof(sinh_vien)*num,SEEK_SET);
    fwrite(&temp,sizeof(sinh_vien),1,f);
    fclose(f);
    printf("%d",temp.id);
}


void show()
{
    int n=update();
    FILE *f=fopen("abc.bin","rb");
    sinh_vien temp[n];
    for(int i=0;i<n;i++)fread(&temp[i],sizeof(sinh_vien),1,f);
    fclose(f);
    
    int a[n];
    for (int i = 0;i < n;i++) {
    	a[i] = temp[i].diem_a + temp[i].diem_b + temp[i].diem_c;
	}
	
	for (int i = 0;i < n;i++) {
		for (int j = i+1;j < n;j++) {
			if (a[i] > a[j]) {
				sinh_vien temp1 = temp[i];
				temp[i] = temp[j];
				temp[j] = temp1;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d %s",temp[i].id,temp[i].name);
		printf(" %.1f %.1f %.1f\n",temp[i].diem_a,temp[i].diem_b,temp[i].diem_c);
	}
	
}
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        scanf("%d",&n);
        printf("%d",append(n));
        break;
    case 2:
        scanf("%d",&n);
        modify(n);
        break;
    case 3:
        show();
        break;
    }
    return 0;
}
 

