#include<stdio.h>
int isPrime (int n ){
    int index = 1;
    if ( n < 2 ){
        index = 0;
    } else {
        for (int i = 2; i < n; i++){
            if(n % i == 0){
                index = 0;
                break;
            }
        }
    }
    return index;
}
int main (){

    int n, index;
    printf(" Nhap vao so can kiem tra:\t");
    scanf(" %d", &n);
    index = isPrime(n);
    if (index == 1){
        printf(" So %d la so nguyen to\n ", n);
    } else {
        printf(" So %d khong phai la so nguyen to\n", n);
    }
    
    return 0;
}