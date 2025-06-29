#include <stdio.h>

/**
 * Hàm chuyển tất cả tất cả đĩa từ tháp A sang tháp C sao cho đĩa nằm dưới phải luôn lớn hơn đĩa nằm trên
 * @param n Số đĩa
 * @param start Tháp A
 * @param middle Tháp B
 * @param end Tháp C
 */
void tower(int n, char start, char middle, char end){
    if(n == 1){
        printf("Dia 1 di chuyen tu A sang C ", start, end);
        return;
    }
    // Chuyển n-1 đĩa từ đĩa A sang đĩa B
    tower(n-1, start, end, middle);
    // Chuyển đĩa lớn nhất từ đĩa A sang C
    printf("Dia %d di chuyen tu %c sang %c\n",n, start, end);
    // Chuyển n-1 đĩa từ đĩa B sang đĩa C
    tower(n-1, middle, start, end);
}

int main(){
    int n;
    // Nhập số đĩa
    printf("Nhap so dia:");
    scanf("%d", &n);
    //In kết quả
    tower(n, 'A', 'B', 'C');

    return 0;
}
