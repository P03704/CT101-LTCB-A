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
	printf("Moi ban nhap chuoi:");     fgets(string, sizeof(string), stdin);    xoaXuongdong(string);
	printf("Chuoi vua nhap la:");    puts(string);
	for(int i=0; i<= strlen(string)-1; i++){
		if(string[i] != string[strlen(string)-1-i]){
			printf("\nChuoi khong doi xung!!!");
		    goto nhap;
		}
	}
	printf("\nDay  la chuoi doi xung!!!");
	nhap: return 0;
}