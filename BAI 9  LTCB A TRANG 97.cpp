#include "stdio.h"
#include "string.h"

void xoaXuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len -1]== '\n'){
		x[len-1]='\0';
	}
}

int  main(){
	char string[100];
	printf("Moi ban nhap ho va ten:");   fgets(string, sizeof(string), stdin);    xoaXuongdong(string);
	printf("Ho va ten  ma ban vua nhap la:");       puts(string);
	int check=1, test;
	for(int i=strlen(string)-1; i>=0 && check==1; i--){
		if(string[i]==' '){
			test=i;
			check=0;
		}
	}
	
	for(int j=test; j<strlen(string); j++){
		printf("%c", string[j]);
	}
	return 0;
}