#include <stdio.h>

int main() {
    int n;
    float S = 0;
    
    do { 
    	printf("Nhap so nguyen le: ");
        scanf("%d", &n);
    } while (n < 3 || n > 15 || n % 2 == 0);

    for (int i = 1; i <= n; i += 2) {
        float tu_so = 0;
        for (int j = 1; j <= i; j += 2) {
            tu_so += j;
        }
        S += tu_so / (i + 1);
    }

    printf("Tong S la: %.2f", S);

    return 0;
}
