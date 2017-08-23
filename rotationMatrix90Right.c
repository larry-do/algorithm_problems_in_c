//xoay ma trận
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],n,b[MAX][MAX];
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            b[i][j]=a[n-1-j][i];
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
