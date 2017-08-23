//Khoảng cách bé nhất của các phần tử
#include<stdio.h>
#include<math.h>
#define MAX 100
int main()
{
    int a[MAX],n,i,j;
    int distance,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    distance=abs(a[n-1]-a[n-2]);
    for(i=n-1;i>=0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(abs(a[i]-a[j])<=distance)
            {
                distance=abs(a[i]-a[j]);
                x=i;
                y=j;
            }
        }
    }
    printf("%d %d %d",distance,a[x],a[y]);
    return 0;
}
