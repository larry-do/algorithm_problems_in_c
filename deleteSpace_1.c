//xóa kí tự trắng trong chuỗi
#include<stdio.h>
#include<string.h>
#define MAX 1000
char *erase_c(char *p, int ch);
int main()
{
    char a[MAX];
    int i;
    gets(a);
    erase_c(a,' ');
    puts(a);
    return 0;
}
char *erase_c(char *p, int ch)
{
    char *ptr;
    while (ptr = strchr(p, ch))
        strcpy(ptr, ptr + 1);
    return p;
}
