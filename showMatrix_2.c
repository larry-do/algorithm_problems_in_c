//in ra ma trận
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],n,i,j,k=1,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        m=i+1;
        for(j=0;j<n;j++)
        {
            if(j>=i)
                printf("%d ",k++);
            else
                printf("%d ",m--);
        }
        k=1;
        printf("\n");
    }
    return 0;
}
