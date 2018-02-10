#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int a[n][n], i, j, k = 0;
	for(i = 0; i < n; i++){
		int m = 1;
		for(j = k; j < n; j++){
			a[j][k] = m;
			a[k][j] = m++;
		}
		k++;
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}