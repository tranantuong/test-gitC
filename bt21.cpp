#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap lan luot do dai 3 canh: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Tam giac deu");
        } else if (a == b || a == c || b == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                printf("Tam giac vuong can");
            } else {
                printf("Tam giac can");
            }
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Tam giac vuong");
        } else {
            printf("Tam giac thuong");
        }
    } else {
        printf("Khong phai tam giac");
    }

    return 0;
}
