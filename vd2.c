#include<stdio.h>
#include<string.h>

int main(){
	int a;
	float f;
	char ch;
	char hoten[30];
	
	printf("hay nhap so nguyen a: ");
	scanf("%d", &a);
	scanf("%d", &f);
	fflush(stdin);
	scanf("%c", &ch);
	strcpy( hoten, "Pham Van Phi");
	printf("\n%d\t%.1f\t%c\t%s",a, f, ch, hoten);
	
}
