//ghép chuỗi
#include<stdio.h>
#include<string.h>
#define MAX 100
void strInsert(char a[],char b[],int n);
int main()
{
    char a[]="abcdefghi";
    char b[]="123";
    strInsert(a,b,1000);
    puts(a);
    return 0;
}
void strInsert(char a[],char b[],int n)
{
    char c[MAX];
    if(n>strlen(a))
        n=strlen(a);
    strncpy(c,a,n);
    c[n]='\0';
    strcat(c,b);
    strcat(c,a+n);
    strcpy(a,c);
    return 0;
}
