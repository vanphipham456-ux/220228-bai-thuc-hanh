#include <stdio.h>

int main() {
    double a, b, c;
    
    printf("Nhap ba so thuc a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("So lon nhat la: ");
    if (a >= b & a >= c) {
        printf("%.2lf\n", a);
    } else if (b >= a & b >= c) {
        printf("%.2lf\n", b);
    } else {
        printf("%.2lf\n", c);
    }
    
    return 0;
}
