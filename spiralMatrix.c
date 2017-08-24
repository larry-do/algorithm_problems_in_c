#include<stdio.h>
#define MAX 100
void main(){
    int a[MAX][MAX];
    int n=10;
    int i,j;
    int cur=1;
    for(i=0;i<(n+1)/2;++i){
        for(j=i;j<n-i-1;++j) a[i][j]=cur++;
        for(j=i;j<n-i-1;++j) a[j][n-i-1]=cur++;
        for(j=n-i-1;j>i;--j) a[n-i-1][j]=cur++;
        for(j=n-i-1;j>i;--j) a[j][i]=cur++;
    }
    if(n&1) a[n/2][n/2] = n*n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",a[i][j]);
        }
        printf("%c",'\n');
    }
}
