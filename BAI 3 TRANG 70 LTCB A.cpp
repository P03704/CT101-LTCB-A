#include "stdio.h"

void inKitu(char c[1], int n){
	do{
		printf("n=");      scanf("%d", &n);
		printf("char:");    scanf("%s", c);
	}while(n<0);
	
	for(int i=0; i<n; i++){
		printf("%s", c);
	}	
}

int main(){
	char c[1];   int n;
	printf("Nhap so luong san pham ban duoc cua cua hang 1:\n");
	inKitu(c, n);
	printf("\nNhap so luong san pham ban duoc cua cua hang 2:\n");
	inKitu(c, n);
	printf("\nNhap so luong san pham ban duoc cua cua hang 3:\n");
	inKitu(c, n);
}