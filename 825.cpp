#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    int loai_muc;
    int tien;
}quan_ly_tien;
int update()
{
    int count=0;
    FILE *f=fopen("quan_ly_tien.bin","rb");
    if(f!=NULL){
        int c=fgetc(f);
        while(c!=EOF){
            count++;
            fseek(f,sizeof(quan_ly_tien)*count,SEEK_SET);
            c=fgetc(f);
        }
    }
    fclose(f);
    return count;
}
int append(int n)
{
    int number=update();
    FILE *f=fopen("quan_ly_tien.bin","ab+");
    int dem_thu = 0,dem_chi = 0;
    for(int i=0;i<n;i++){
        quan_ly_tien temp;
        temp.id=++number;
        int c;
        scanf("%d",&temp.loai_muc);
        if (temp.loai_muc == 1) {
        	dem_thu++;
		} else {
			dem_chi++;
		}
        while((c=getchar())!='\n');
        gets(temp.name);
        scanf("%d",&temp.tien);
        fwrite(&temp,sizeof(quan_ly_tien),1,f);
    }
    fclose(f);
    printf("%d %d",dem_thu,dem_chi);
}
void modify(int num)
{
    FILE *f=fopen("quan_ly_tien.bin","rb+");
    quan_ly_tien temp;
    temp.id=num--;
    int c;
    scanf("%d",&temp.loai_muc);
    while((c=getchar())!='\n');
    gets(temp.name);
    scanf("%d",&temp.tien);
    fseek(f,sizeof(quan_ly_tien)*num,SEEK_SET);
    fwrite(&temp,sizeof(quan_ly_tien),1,f);
    fclose(f);
    printf("%s",temp.name);
}
void show()
{
    int n=update();
    FILE *f=fopen("quan_ly_tien.bin","rb");
    quan_ly_tien temp[n];
    for(int i=0;i<n;i++)fread(&temp[i],sizeof(quan_ly_tien),1,f);
    fclose(f);
    int tong_thu = 0;
    int tong_chi = 0;
    for (int i = 0;i < n;i++) {
    	if (temp[i].loai_muc == 2) {
    		tong_chi += temp[i].tien;
		} else {
			tong_thu+= temp[i].tien;
		}
	}
	printf("%d %d %d\n",tong_thu,tong_chi,(tong_thu - tong_chi));
}
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        scanf("%d",&n);
        append(n);
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
