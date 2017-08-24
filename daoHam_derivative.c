#include<stdio.h>
void derivative(int z[],int n,int a[]);
void show(int a[],int n);
void main(){
    int z[]={4,5,6,7},n=3; // n là bậc của đa thức ( nên có n+1 phần tử là hệ số)
    int a[n-1];// một số trường hợp nó bắt số phần tử phải là một hằng sô.
    derivative(z,n,a);
    show(a,n);//n lúc này là số hệ số của a, tức là a chỉ bậc n-1 thôi
}
void derivative(int z[],int n,int a[]){
    int k=n,i;
    for(i=0;i<n;i++){
        a[i]=z[i]*(k--);
    }
}
void show(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
