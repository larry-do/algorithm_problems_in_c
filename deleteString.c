//xóa một phần tử trong chuỗi
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="Nguyen Van A";
    strcpy(&a[2],&a[4]);
    puts(a);
}
