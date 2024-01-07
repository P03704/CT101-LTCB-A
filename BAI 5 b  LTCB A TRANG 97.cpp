#include <stdio.h>
#include <string.h>

void xoaXuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len -1]== '\n'){
		x[len-1]='\0';
	}
}

int main(){
	char string[100];
	printf("Moi ban nhap chuoi:");      fgets(string, sizeof(string), stdin);    xoaXuongdong(string);
	int check=1, test;
	
	for(int i=strlen(string)-1; i>=0 && check==1; i--){
		if(string[i]==' '){
			test=i;
			check=0;
		}	
  }
	for(int i=test+1; i<strlen(string); i++){
		printf("%c", string[i]);
	}
	printf("\n");
	for(int i=0; i<test; i++){
		printf("%c", string[i]);
	}
	return 0;
}