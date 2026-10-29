#include <stdio.h>

int main() {
    int n, cs, dao =0, tong =0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n > 0) {
        cs = n%10;
        dao =dao * 10+cs;
        tong =tong+cs;
        n =n/10;
    }
    printf("So dao nguoc = %d\n", dao);
    printf("Tong cac chu so = %d", tong);
    return 0;
}
