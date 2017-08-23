// đếm xem chuỗi có bao chữ cái, số, symbol
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char a[MAX];
    int i,karacter=0,number=0,symbol=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            karacter++;
        else if(a[i]>=48&&a[i]<=57)
            number++;
        else
            symbol++;
    }
    printf("%d %d %d",number,karacter,symbol);
    return 0;
}
