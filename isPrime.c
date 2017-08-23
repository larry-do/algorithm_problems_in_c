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
/*
-----------------**Ý tưởng thuật toán**----------------
Các số nguyên tố trừ 2,3 đều có dạng 6k-1 hoặc 6k+1 ( ngược lại không đúng )
Ta kiểm tra n có chia hết cho các số có dạng này ko.
Nếu gặp chia hết thì chắc chắn i sẽ bé hơn hoặc bằng sqrt(n).
Còn ko gặp thì sẽ dừng lại khi i lớn hơn sqrt(n)
Trả về đúng nếu i lớn hơn sqrt(n) và ngược lại
*/
