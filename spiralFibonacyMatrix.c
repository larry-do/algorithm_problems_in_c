//matrix fibonacy xoan oc
#include<stdio.h>
#define MAX 100
void main()
{
    int a[MAX][MAX];
    int n=3;
    int i,j;
    //tao ra mot mang chua cac so fibo truoc
    int fibo[MAX];
    fibo[0]=1;
    fibo[1]=1;
    for(i=2;i<n*n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    //bat dau
    int cur=0;
    for(i=0;i<(n+1)/2;++i){
        for(j=i;j<n-i-1;++j) a[i][j]=fibo[cur++];
        for(j=i;j<n-i-1;++j) a[j][n-i-1]=fibo[cur++];
        for(j=n-i-1;j>i;--j) a[n-i-1][j]=fibo[cur++];
        for(j=n-i-1;j>i;--j) a[j][i]=fibo[cur++];
    }
    if(n&1) a[n/2][n/2]=fibo[n*n-1];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",a[i][j]);
        }
        printf("%c",'\n');
    }
}
