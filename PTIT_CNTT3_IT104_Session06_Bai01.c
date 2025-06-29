#include <stdio.h>

/**
 *Hàm chuyên số thập phân sang số nhị phân
 * @param n
 * @return
 */
void decimalToBinary(int n)
{
    if (n == 0){
        return;
    }
    decimalToBinary(n/2);
    printf("%d", n%2);
}


int main() {
    int decimalNumber;
    // Nhập số bất kỳ
    printf("Nhap so bat ky: ");
    scanf("%d", &decimalNumber);
    // In kết quả
    decimalToBinary(decimalNumber);

    return 0;
}