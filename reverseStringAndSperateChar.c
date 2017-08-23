//đảo ngược chuỗi và tách từng kí tự
#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char a[MAX];
    int i;
    gets(a);
    for(i=strlen(a)-1;i>=0;i--)
    {
        if(a[i]!=' ')
            printf("%c ",a[i]);
    }
    return 0;
}
