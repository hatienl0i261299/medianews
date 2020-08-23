#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int main()
{
    char a[mx], b[mx];
    gets(a);
    char *p = strtok(a, " ");
    strcpy(b, p);
    strupr(b);
    bool kt=true;
    while(p!=null)
    {
        p = strtok(null, " ");
        if(p != null)
        {
            if(p[0] >= 'a' and p[0] <= 'z') p[0] -= 32;
            if(kt==true) kt=false;
            else printf(" ");
            for(int i=1;i<sizeof(p);i++) if(p[i]>='A'&&p[i]<='Z') p[i]+=32;
            printf("%s", p);
        }
    }
    printf(", %s", b);
    return 0;
}

