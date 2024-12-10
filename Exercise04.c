#include<stdio.h>
int findMax ( int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if( arr[i]> max){
            max = arr[i];
        }
    }
    return max;
}

int main (){
    int arr[100], n , max;
    printf(" Nhap vao so phan tu cua mang\n");
    scanf(" %d", &n);\
    for (int  i = 0; i < n; i++)
    {
        printf(" Nhap vao gia tri tai phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf(" Gia tri lon nhat trong mang la:\t");
    max = findMax(arr, n);
    printf(" %d", max);
    return 0;
}