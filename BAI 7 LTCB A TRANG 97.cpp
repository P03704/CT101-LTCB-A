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
	printf("Moi ban nhap chuoi:");       fgets(string, sizeof( string), stdin);     xoaXuongdong(string);
	printf("\nChuoi ban vua nhap la:");     puts(string);
	
	int about1, about2;
	about1=strlen(string);
	printf("Dao nguoc chuoi theo tung chu la:");
	for(int i=strlen(string); i>=0; i--){
		if(string[i]==' '){
		    about2=about1;
			about1=i;
			for(int j=about1; j<about2; j++){
				printf("%c", string[j]);
			}
		}
	}
	printf(" ");
    for(int k=0; k<about1; k++){
    	printf("%c", string[k]);
	}
}
