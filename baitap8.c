#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Khong phai so nguyen to");
    } else {
        while (i < n) {
            if (n % i == 0) {
                break;
            }
            i++;
        }

        if (i == n) {
            printf("La so nguyen to");
        } else {
            printf("Khong phai so nguyen to");
        }
    }

    return 0;
}
