#include<stdio.h>
#define MAX 100
int isStrong(int a);
int luythua(int a);
int main()
{
    int a,b,i,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
        if(isStrong(i))
        {
            printf("%d ",i);
            count++;
        }
    if(count==0)
        printf("0");
    return 0;
}
int isStrong(int a)
{
    int b[MAX],i,j=0,n=a,luy_thua=0;
    while(n>0)
    {
        b[j++]=n%10;
        n/=10;
    }
    for(i=0;i<j;i++)
        luy_thua+=luythua(b[i]);
    return(luy_thua==a);
}
int luythua(int a)
{
    if(a==0) return 1;
    return a*luythua(a-1);
}
