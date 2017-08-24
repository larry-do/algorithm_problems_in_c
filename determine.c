#include<stdio.h>
#define MAX 100
float determineMatrix(float *b, int n);
void main(){
    float a[3][3]={1,2,3,4,5,6,7,8,2};
    int n=3;
    printf("%.2f",determineMatrix(&a,n));
    return;
}
float determineMatrix(float *b, int n){
    if(n==0) return 0; // nếu mảng n=0 thì tất nhiên là đếch phải matrix
    int i,j,p=0;
    float a[n][n];
    //truyền lại mảng vào.
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=*(b+p++);
        }
    }
    //nếu ma trận bậc 1 thì return
    if(n==1) return a[0][0];
    //bắt đầu chính thức
    int sign=1;// dấu của định thức
    float det=1;// kết quả định thức
    for(i=0;i<n-1;i++){
        if(a[i][i]==0){ // nếu được chéo chính có một phần tử bằng 0
            int k=i+1;
            while(k<n&&a[k][i]==0) k++; // thì kiểm tra xem có các phần tử dưới nó cùng cột có cái nào khác 0 không
            if(k==n) return 0; // không có phần tử nào thì định thức bằng 0
            for(j=i;j<n;j++){ // nếu phát hiện thì đổi hàng cho nhau
                float tmp=a[i][j];
                a[i][j]=a[k][j];
                a[k][j]=tmp;
            }
            sign=-sign; //định thức đổi dấu luôn
        }
        int k;
        //giờ thì dùng gauss thôi
        for(k=i+1;k<n;k++){
            float tmp=-a[k][i]/a[i][i];
            for(j=i+1;j<n;j++) a[k][j]+=tmp*a[i][j];
        }
        det*=a[i][i]; //tiện nhân luôn đường chéo lại
    }
    det*=a[n-1][n-1];// còn nốt cái cuối trên đường chéo
    return det; //done
}

