// đảo ngược chữ hoa -  thường
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char a[MAX];
    int i;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]-=32;
        else if(a[i]>='A'&&a[i]<='Z')
            a[i]+=32;
    }
    puts(a);
    return 0;
}
