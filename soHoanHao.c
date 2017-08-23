#include<stdio.h>
#define MAX 1000
int isHoanhao(int a);
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(isHoanhao(i)==1)
            printf("%d ",i);
    }
    return 0;
}
int isHoanhao(int a)
{
    int b[MAX],i,j=0,sum=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            b[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++)
        sum+=b[i];
    if(sum==a)
        return 1;
    else
        return 0;
}
