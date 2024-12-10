#include <stdio.h>
float sum( float a, float b){
    float sum = a + b; 
    return sum;
}
int main (){
    float a, b, result;
    printf(" Nhap vao so thu nhat: ");
    scanf(" %f", &a);
    printf(" Nhap vao so thu hai: ");
    scanf(" %f", &b);
    result = sum(a, b);
    printf(" Tong cua 2 gia tri vua nhap la : %.1f", result);
    
    return 0;
}