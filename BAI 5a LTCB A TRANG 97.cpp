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
	
	for(int i=0; i< strlen(string) && check==1; i++){
		if(string[i] != ' '){
			printf("%c", string[i]);
		}else{
			check=0;
			test=i;
		}		
	}
	printf("\n");
	for(int i=test+1; i<strlen(string); i++){
		printf("%c", string[i]);
	}
	return 0;
}