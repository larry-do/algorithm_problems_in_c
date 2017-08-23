//in ra ma trận
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],n;
    int i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=n;
        for(j=0;j<n;j++)
        {
            printf("%d ",k);
            k=k-((j<i)?1:0);
        }
        printf("\n");
    }
    return 0;
}
