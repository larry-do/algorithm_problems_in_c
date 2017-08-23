//đếm và liệt kê số lẻ chẵn
#include<stdio.h>
#define MAX 1000
int main()
{
    int a[MAX],n;
    int e[MAX],o[MAX];
    int i,j,even=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
            e[even-1]=a[i];
        }
        else
        {
            odd++;
            o[odd-1]=a[i];
        }
    }
    printf("%d ",even);
    for(i=0;i<even;i++)
        printf("%d ",e[i]);
    printf("\n");
    printf("%d ",odd);
    for(i=0;i<odd;i++)
        printf("%d ",o[i]);
    return 0;
}
