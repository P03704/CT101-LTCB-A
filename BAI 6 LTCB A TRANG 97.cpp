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
	printf("Moi ban nhap chuoi:");      fgets(string, sizeof(string), stdin);     xoaXuongdong(string);
	printf("Chuoi ban vua nhap la:\n");     
	for(int i=0; i<strlen(string); i++){
		if(string[i]== ' '){
			string[i]='\n';
		}		
	}
    puts(string);
}
