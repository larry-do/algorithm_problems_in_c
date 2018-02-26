#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0||n<2) return 0;
    int i=-1, sqrtOf_n=(int)sqrt(n); // giảm bớt thời gian tính toán sqrt
    do{
        i+=6;
        if((n%i==0)||(n%(i+2)==0)) break;
    }while(i<=sqrtOf_n);
    return (i>sqrtOf_n);
}
int main(){
	int n; scanf("%d", &n);
	int a[n][n];
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int res = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if((i == j || i == n-1-j) && isPrime(a[i][j])){
				res++;
			}
		}
	}
	printf("%d", res);
	return 0;
}