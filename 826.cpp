#include <stdio.h>
#include <string.h>
 
typedef struct sinhvien{
    char name[50];
    int nums;
    char code[50];
} sv;
const int size = sizeof(sv);
int count(){
    FILE *outfile = fopen("data.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(sv)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}
 
void addnew(int n){
    FILE *outfile = fopen("data.bin","ab+");
    
    int c = count();
    while((getchar()) != '\n');
    for(int i=1 ; i<=n ; i++){
        sv s;
        s.nums = i+c;
        gets(s.code);
        gets(s.name);
        fseek(outfile,0,SEEK_END);
        fwrite(&s,sizeof(s),1,outfile);
    }
    fclose(outfile);
}
 
void edit(){
    FILE *outfile = fopen("data.bin","rb+");
    while(getchar() != '\n');
    char c[1000];
    gets(c);
    sv s;
    while(fread(&s,size,1,outfile)){
		if(strcmp(c,s.code)==0){
			gets(s.code);
			gets(s.name);
			fseek(outfile,-size,SEEK_CUR);
			fwrite(&s,size,1,outfile);
			break;
		}
	}
	fclose(outfile);
	printf("%s\n",s.code);
}
 
void display(){
    FILE *outfile = fopen("data.bin","rb+");
    while(getchar() != '\n');
    char c[1000];
    gets(c);
    sv s;
    while(fread(&s,size,1,outfile)){
    	if(strstr(s.code,c) != NULL){
    		printf("%d %s %s\n",s.nums,s.name,s.code);
		}
	}
	fclose(outfile);
}
 
int main(){
    int n ;
    scanf("%d", &n);
    switch (n) {
    case 1 :
        scanf("%d", &n) ;
        addnew(n) ;
        printf("%d",n) ;
        break ;
    case 2 :
        edit();
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf(" ") ;
    }
    return 0;
}
