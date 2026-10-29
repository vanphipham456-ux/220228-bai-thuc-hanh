#include<stdio.h>
int main(){
	int n, i=1, gt=1;
	printf("nhap n: ");
	scanf("%d", &n);
	while(i <=n ){
		gt = gt * i;
		i++;
	}
	printf("giai thua =%d", gt);
	return 0;
}
