//xóa kí tự trắng trong chuỗi
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char a[MAX];
    char *token;
    gets(a);
    token=strtok(a," ");
    while(token!=NULL)
    {
        printf("%s",token);
        token=strtok(NULL," ");
    }
    return 0;
}
