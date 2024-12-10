#include<stdio.h>
long long factorial( int n){
    if(n <= 0){
        printf("Gia tri nhap vao khong hop le" );
        return -1;
    }
    long long result = 1;
    for (int  i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
int main(){

    long long n, result = 0;
    printf(" Nhap vao so n:\t");
    scanf(" %lld", &n);
    result = factorial(n);
    printf(" Giai thua cua %lld la: %lld", n, result);
    
    return 0;
}