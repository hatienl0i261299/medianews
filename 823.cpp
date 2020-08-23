#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    float gia_nhap;
    int nam_bao_hanh;
}thiet_bi;
int update()
{
    int count=0;
    FILE *f=fopen("thiet_bi1.bin","rb");
    if(f!=NULL){
        int c=fgetc(f);
        while(c!=EOF){
            count++;
            fseek(f,sizeof(thiet_bi)*count,SEEK_SET);
            c=fgetc(f);
        }
    }
    fclose(f);
    return count;
}
int append(int n)
{
    int number=update();
    FILE *f=fopen("thiet_bi1.bin","ab+");
    for(int i=0;i<n;i++){
        thiet_bi temp;
        temp.id=++number;
        int c;
        while((c=getchar())!='\n');
        gets(temp.name);
        scanf("%f%d",&temp.gia_nhap,&temp.nam_bao_hanh);
        fwrite(&temp,sizeof(thiet_bi),1,f);
    }
    fclose(f);
    return n;
}
void modify(int num)
{
    FILE *f=fopen("thiet_bi1.bin","rb+");
    thiet_bi temp;
    temp.id=num--;
    int c;
    while((c=getchar())!='\n');
    gets(temp.name);
    scanf("%f%d",&temp.gia_nhap,&temp.nam_bao_hanh);
    fseek(f,sizeof(thiet_bi)*num,SEEK_SET);
    fwrite(&temp,sizeof(thiet_bi),1,f);
    fclose(f);
    printf("%d",temp.id);
}
void show()
{
    int n=update();
    FILE *f=fopen("thiet_bi1.bin","rb");
    thiet_bi temp[n];
    for(int i=0;i<n;i++)fread(&temp[i],sizeof(thiet_bi),1,f);
    fclose(f);
    for(int i=0;i<n;i++){
	    for(int j =i + 1;j < n;j++){
	        if(temp[i].gia_nhap<temp[j].gia_nhap){
	            thiet_bi temp1=temp[i];
	            temp[i]=temp[j];
	            temp[j]=temp1;
	        }
        }
    }
    for(int i=0;i<n;i++){
    	printf("%d %s %.1f %d\n",temp[i].id,temp[i].name,temp[i].gia_nhap,temp[i].nam_bao_hanh);
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

