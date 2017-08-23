#include <stdio.h>
#define MAX 100
int isArmstrong(int a);
long int new_pow(int x,int y);
int main()
{
    int a,b,i,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=(a>=b?b:a);i<=(a>=b?a:b);i++)
    {
        if(isArmstrong(i)==1)
        {
            count++;
            printf("%d ",i);
        }
    }
    if(count==0)
        printf("0");
    return 0;
}
int isArmstrong(int a)
{
    int b[MAX],n=a,j=0,value=0,i;
    while(n>0)
    {
        b[j]=n%10;
        n/=10;
        j++;//cho nay chua chac b[j++] da hoat dong chinh xac. tot nhat nen de nhu the nay. khi nao tao nhin lai sau
    }
    for(i=0;i<j;i++)
        value+=new_pow(b[i],j);
    if(value==a)
        return 1;
    else
        return 0;
}
long int new_pow(int x,int y) // tao khong tin tuong ham pow co san nua
{
    int i,pow_x=1;
    if(y==0)
        return 1;
    for(i=0;i<y;i++)
        pow_x*=x;
    return pow_x;
}
