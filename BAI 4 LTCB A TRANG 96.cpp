#include "stdio.h"
#include "string.h"

void xoaXuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len -1]== '\n'){
		x[len-1]='\0';
	}
}

int main(){
	char string[100];
	printf("Moi ban nhap chuoi:");    fgets(string, sizeof(string), stdin);    xoaXuongdong(string);
	printf("\nChuoi ban vua nhap la:");      puts(string);      
	for(int i=0; i<strlen(string); i++){
		int count=0;
		for(int j=0; j<strlen(string); j++){
			if(string[i] == string[j]){
				count++;
			}
		}
	printf("\n Ki tu %c  xuat hien %d lan!!!", string[i], count);
	}
}
