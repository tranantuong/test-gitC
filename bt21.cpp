#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap lan luot do dai 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Tam giac deu co ba canh bang nhau");
        } else if (a == b || a == c || b == c) {    
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                printf("Tam giac vuong can");
            } else {
                printf("Tam giac can");
            }
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Tam giac vuong co 1 goc 90 do");
        } else {
            printf("Tam giac thuong khong co gi dac biet");
        }
    } else {
        printf("Khong phai tam giac vi sai kich thuoc");
    }

    return 0;
}
