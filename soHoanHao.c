#include <stdio.h>
int isHoanHao(int a){
    if(a < 6) return 0;
    int sum = 1;
    int k = a, i;
    for(i = 2; i < k; i++){
        if(a % i == 0){
            k = a / i;
            sum+=(k+i);
        }
    }
    return sum == a;
}
int main(){
    int a, b, i; scanf("%d%d", &a, &b);
    if(a <= b){
        for(i = a; i <= b; i++){
            if(isHoanHao(i)) printf("%d ", i);
        }
    }
    else{
        for(i = b; i <= a; i++){
            if(isHoanHao(i)) printf("%d ", i);
        }
    }
    return 0;
}