#include <stdio.h>
int check(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i=2;i *i<=number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number1;
    printf("hay nhap so luong so nguyen to can in ra: ");
    scanf("%d",&number1);

    int count = 0;
    int number = 2;

    while (count<number1) {
        if (check(number)) {
            printf("%d\n",number);
            count++;
        }
        number++;
    }

    return 0;
}

