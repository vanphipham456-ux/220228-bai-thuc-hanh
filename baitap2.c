
#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so chan tu 1 den n la: ");
    i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\nCac so le tu 1 den n la: ");
    i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

