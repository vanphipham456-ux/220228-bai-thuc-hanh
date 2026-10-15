#include <stdio.h>
int main(){
	int n;

	printf("nhap so tu 1 den 7: ");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf(" Thu Hai ");
			break;
			case 2:
				printf("Thu Ba ");
				break;
				case 3:
					printf("Thu Tu ");
					break;
					case 4:
						printf("Thu Nam ");
						break;
						case 5:
							printf(" Thu Sau ");
							break;
							case 6:
								printf("Thu Bay");
								break;
								case 7:
									printf(" Chu Nhat");
									break;
									default:
										printf("Nhap Sai!");						
	}
	return 0;
}
