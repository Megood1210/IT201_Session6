#include <stdio.h>


/**
 * Hàm tính tổng các số trong chữ số
 * @param n Số
 * @return
 */
int sumNumber(int n){
    // Kết thúc cộng dồn khi số bằng 0
    if(n == 0){
        return 0;
    }
    return (n%10) + sumNumber(n/10); // Cộng dồn số cuối cùng với những số còn lại
}
int main(){
    int n;
    // Nhập số phần tử
    printf("Nhap so bat ky: ");
    scanf("%d", &n);
    // Kiểm tra số
    if (n <= 0){
        printf("Input khong hop le");
    }
    //Gọi hàm tính tổng
    int sum = sumNumber(n);
    // In kết quả
    printf("%d", sum);
    return 0;
}