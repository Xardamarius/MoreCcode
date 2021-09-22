#include <stdio.h>
int main(){
	
	short int a = 1;

	for(int i = 0, j = 0; i < sizeof(short int) * 8; ++i) {
		if (a & (1<< i)) printf("1");
		else printf("0");


		j++;
		if(j == 8) { printf(" "); j = 0;}
	}


	printf("\n");
	printf("Распвковка файлов по адресу: %P", &a);


	printf("\n");
	return 0;	
}