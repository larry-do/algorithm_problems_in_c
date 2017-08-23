#include<stdio.h>
#define MAX 1000
int isArmstrong(int a);
int main()
{
    int a,b,i,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=(a>=b?b:a);i<=(a>=b?a:b);i++)
    {
        if(isArmstrong(i))
        {
            count++;
            printf("%d ",i);
        }
    }
    if(count==0)
        printf("%d",count);
    return 0;
}
int isArmstrong(int a)
{
    int b[MAX],i,k,m=1,j=0,n=a,sum=0;
    while(n>0)
    {
        b[j]=n%10;
        n/=10;
        j++;
    }
    for(i=0;i<j;i++) //deo hieu sao pow(1,x) luon bang 0 nen ko su dung duoc
    {
        for(k=0;k<j;k++)
        {
            m*=b[i];
        }
        sum+=m;
        m=1;
    }
    if(sum==a)
        return 1;
    else
        return 0;
}
