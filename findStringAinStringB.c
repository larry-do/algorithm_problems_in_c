//tim xau 1 trong xau 2
#include<stdio.h>
#define MAX 100
int main()
{
    char s1[MAX],s2[MAX];
    char *p;
    gets(s2);
    gets(s1);
    if((p=strstr(s2,s1))!=NULL)
        printf("1");
    else
        printf("0");
    return 0;
}
