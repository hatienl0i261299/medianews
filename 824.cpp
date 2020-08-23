#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    char author[50];
    float price;
}book;
int update()
{
    int count=0;
    FILE *f=fopen("giatangdan.bin","rb");
    if(f!=NULL){
        int c=fgetc(f);
        while(c!=EOF){
            count++;
            fseek(f,sizeof(book)*count,SEEK_SET);
            c=fgetc(f);
        }
    }
    fclose(f);
    return count;
}
int append(int n)
{
    int number=update();
    FILE *f=fopen("giatangdan.bin","ab+");
    for(int i=0;i<n;i++){
        book temp;
        temp.id=++number;
        int c;
        while((c=getchar())!='\n');
        gets(temp.name);
        gets(temp.author);
        scanf("%f",&temp.price);
        fwrite(&temp,sizeof(book),1,f);
    }
    fclose(f);
    return n;
}
void modify(int yasua)
{
    FILE *f=fopen("giatangdan.bin","rb+");
    book temp;
    temp.id=yasua--;
    int c;
    while((c=getchar())!='\n');
    gets(temp.name);
    gets(temp.author);
    scanf("%f",&temp.price);
    fseek(f,sizeof(book)*yasua,SEEK_SET);
    fwrite(&temp,sizeof(book),1,f);
    fclose(f);
    puts(temp.name);
}
void show()
{
    int n=update();
    FILE *f=fopen("giatangdan.bin","rb");
    book temp[n];
    for(int i=0;i<n;i++)fread(&temp[i],sizeof(book),1,f);
    fclose(f);
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>=i;j--){
            if(temp[i].price>temp[j].price){
                book temp1=temp[i];
                temp[i]=temp[j];
                temp[j]=temp1;
            }
        }
    }
    for(int i=0;i<n;i++)printf("%d %s %.2f %s\n",temp[i].id,temp[i].name,temp[i].price,temp[i].author);
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
 

