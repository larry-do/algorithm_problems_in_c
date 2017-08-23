//tìm số lớn thứ 2 trong mảng
#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX],n;
    int i,max,max_2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=max_2=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
            max=a[i];
        if(a[i]<max_2)
            max_2=a[i];
    }
    for(i=0;i<n;i++)
        if(a[i]>=max_2&&a[i]<max)
            max_2=a[i];
    printf("%d",max_2); // thuc ra co truong hop tat ca cac so trong mang deu bang nhau nua~
    return 0;
}
