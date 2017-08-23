// đếm số nguyên tố không lặp trong một ma trận
#include<stdio.h>
#define MAX 100
int isPrime(int a);
int main()
{
    int a[MAX][MAX],n;
    int i,j,m,k,count=0,tmp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(isPrime(a[i][j])==1)
            {
                tmp=0;
                for(m=0;m<=i;m++)
                {
                    if(m<i)
                    {
                        for(k=0;k<n;k++)
                        {
                            if(a[m][k]==a[i][j])
                                tmp++;
                        }
                    }
                    else if(m==i)
                    {
                        for(k=0;k<j;k++)
                        {
                            if(a[m][k]==a[i][j])
                                tmp++;
                        }
                    }
                }
                if(tmp==0)
                    count++;
            }
        }
        printf("%d",count);
    return 0;
}
int isPrime(int a)
{
    int count=0,i;
    for(i=1;i<=a;i++)
        if(a%i==0)
            count++;
    if(count==2)
        return 1;
    else
        return 0;
}
