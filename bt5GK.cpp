#include <stdio.h>
int check(int number) {
    if (number <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= number; i++) { 
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int number;
    printf("nhap so nguyen can kiem tra:");
    scanf("%d", &number);
    if (check(number)) {
        printf("%d la so nguyen to\n", number);
    } else {
        printf("%d khong phai la so nguyen to", number);
    }

    return 0;
}

