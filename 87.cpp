#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    float gia_nhap;
    float gia_xuat;
}san_pham;
int update()
{
    int count=0;
    FILE *f=fopen("laigapdoi.bin","rb");
    if(f!=NULL){
        int c=fgetc(f);
        while(c!=EOF){
            count++;
            fseek(f,sizeof(san_pham)*count,SEEK_SET);
            c=fgetc(f);
        }
    }
    fclose(f);
    return count;
}
int append(int n)
{
    int number=update();
    FILE *f=fopen("laigapdoi.bin","ab+");
    for(int i=0;i<n;i++){
        san_pham temp;
        temp.id=++number;
        int c;
        while((c=getchar())!='\n');
        gets(temp.name);
        scanf("%f%f",&temp.gia_nhap,&temp.gia_xuat);
        fwrite(&temp,sizeof(san_pham),1,f);
    }
    fclose(f);
    return n;
}
void modify(int num)
{
    FILE *f=fopen("laigapdoi.bin","rb+");
    san_pham temp;
    temp.id=num--;
    int c;
    while((c=getchar())!='\n');
    gets(temp.name);
    scanf("%f%f",&temp.gia_nhap,&temp.gia_xuat);
    fseek(f,sizeof(san_pham)*num,SEEK_SET);
    fwrite(&temp,sizeof(san_pham),1,f);
    fclose(f);
    printf("%d",temp.id);
}
void show()
{
    int n=update();
    FILE *f=fopen("laigapdoi.bin","rb");
    san_pham temp[n];
    for(int i=0;i<n;i++)fread(&temp[i],sizeof(san_pham),1,f);
    fclose(f);
    
    for (int i = 0;i < n;i++) {
    	if (  (temp[i].gia_xuat - temp[i].gia_nhap) > temp[i].gia_nhap  ) {
    		printf("%d %s %.2f %.2f\n",temp[i].id,temp[i].name,temp[i].gia_nhap,temp[i].gia_xuat);
		}
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
