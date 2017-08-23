//xoay ma tran 180 do
#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],n;
    int i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
            for(j=0;j<n;j++)
            {
                temp=a[i][j];
                a[i][j]=a[n-1-i][n-1-j];
                a[n-1-i][n-1-j]=temp;
            }
    }
    else
    {
        for(i=0;i<n/2;i++)
            for(j=0;j<n;j++)
            {
                temp=a[i][j];
                a[i][j]=a[n-1-i][n-1-j];
                a[n-1-i][n-1-j]=temp;
            }
        for(j=0;j<n/2;j++)
        {
            temp=a[n/2][j];
            a[n/2][j]=a[n/2][n-1-j];
            a[n/2][n-1-j]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
