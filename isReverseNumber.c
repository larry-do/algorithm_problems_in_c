#include<stdio.h>
int main(){
    int a=123321;
    printf("%d",isReverseNumber(a));
    return 0;
}
int isReverseNumber(int a)
{
    int b=0,n=a;
    while(n>0){
        b=b*10+n%10;
        n/=10;
    }
    return(a==b);
}
