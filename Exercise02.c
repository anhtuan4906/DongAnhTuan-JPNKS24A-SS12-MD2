#include<stdio.h>
void printArray ( int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf(" %d\t", arr[i]);
    }
}
int main (){
    int myArr[100], n; 
    printf(" Nhap vao so phan tu cua mang\n");
    scanf(" %d", &n);\
    for (int  i = 0; i < n; i++)
    {
        printf(" Nhap vao gia tri tai phan tu myArr[%d]: ", i);
        scanf("%d", &myArr[i]);
    }
    printf(" Cac gia tri duoc truyen vao trong mang la:\t");
    printArray(myArr, n);
    
    return 0; 
}