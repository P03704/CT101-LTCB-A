#include "stdio.h"
#include "string.h"

int main(){
	char string[100];      printf("Moi ban nhap chuoi: ");   fgets(string, sizeof(string), stdin);
	printf("\nChuoi vua nhap la: ");    puts(string);   
	printf("\nChuoi dao nguoc la: %s", strrev(string));  	
}