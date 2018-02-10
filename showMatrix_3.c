#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int a[n][n], i, j;
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			a[j][i] = n-i;
			a[i][j] = n-i;
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}