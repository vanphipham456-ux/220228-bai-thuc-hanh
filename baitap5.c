#include<stdio.h>
int main(){
	int n, i=1, s=0;
	printf("nhap n: ");
	scanf("%d", &n);
	while (i<=n){
		if (i % 2 !=0){
			s = s + i;
		}
		i++;
	}
	printf("tong cac so le s =%d",s);
	return 0;
}
