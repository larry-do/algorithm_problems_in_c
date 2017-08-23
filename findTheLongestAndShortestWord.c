//tìm từ dài nhất ngắn nhất trong chuỗi
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char *p,*pmax,*pmin;
    int max,min;
    gets(a);
    p=strtok(a," ");
    pmin=pmax=p;
    min=max=strlen(p);
    while(p!=NULL)
    {
        if(strlen(p)>max)
        {
            max=strlen(p);
            pmax=p;
        }
        if(strlen(p)<min)
        {
            min=strlen(p);
            pmin=p;
        }
        p=strtok(NULL," ");
    }
    puts(pmax);
    puts(pmin);
    return 0;
}
