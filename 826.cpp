#include <stdio.h>
#include <string.h>

typedef struct sv{
	char name[50];
	int nums;
	char code[50];
} sv;

int count(){
	FILE *outfile = fopen("ok.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(sv)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}

void addnew(int n){
	FILE *outfile = fopen("ok.bin","ab");
	
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
	FILE *outfile = fopen("ok.bin","rb+");
	char temp[50];
	while((getchar()) != '\n');
	gets(temp);
	
	int n = count();
	for(int i=0 ; i<n ; i++){
		sv s;
		fseek(outfile,sizeof(sv)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(strcmp(temp,s.code)==0){
			sv ss;
			ss.nums = i+1;
			gets(ss.code);
			gets(ss.name);
			fseek(outfile,sizeof(sv)*i,SEEK_SET);
			fwrite(&ss,sizeof(ss),1,outfile);
			puts(ss.code);
			break;
		}	
	}
}

void display(){
	FILE *outfile = fopen("ok.bin","rb");
	int n = count();
	while((getchar()) != '\n');
	char temp[50];
	gets(temp);
	
	for(int i=0 ; i<n ; i++){
		sv s;
		fseek(outfile,sizeof(sv)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(strncmp(s.code,temp,7)!=0)
			continue;
		printf("%d %s %s",s.nums,s.name,s.code);
		printf("\n");
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
        edit() ;
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf(" ") ;
    }
    return 0;
}
