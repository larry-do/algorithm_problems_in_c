// tách từng chữ cái trong chuỗi
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    int i;
    char a[MAX];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
            printf("%c ",a[i]);
    }
    return 0;
}
