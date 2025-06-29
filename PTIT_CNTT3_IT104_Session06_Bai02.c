#include <stdio.h>

/**
 * Hàm tính số fibonacci tại vị trí n
 * @param n Số bất kỳ
 * @return
 */
int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2); // F(n) = F(n-1) + F(n-2)
    }
}
int main(){
    int n;
    // Nhập số bất kỳ
    printf("Nhap so bat ky: ");
    scanf("%d", &n);
    // Kiểm tra sô nhập
    if(n <= 0){
        printf("Input khong hop le");
    }
    // Mảng lưu kết quả
    int arr[n];
    // Nhập các phần tử
    for (int i = 0; i < n; i++){
        arr[i] = fibonacci(i+1);
    }
    // In kết quả
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        if(i < n - 1){
            printf(",");
        }
    }


    return 0;
}