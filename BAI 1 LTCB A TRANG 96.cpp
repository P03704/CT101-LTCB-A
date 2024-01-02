#include "stdio.h"
#include "string.h"

int main(){
	char kitu[100];
	printf("Moi ban nhap chuoi ki tu:");
	fgets(kitu, sizeof(kitu), stdin);
    printf("Chuoi ban vua nhap la:"); puts(kitu); printf("Co ma ASCII la:\n");
    strlen(kitu);  
    for(int i=0; i<strlen(kitu); i++){
    	printf("%d\n", kitu[i]);// kết thúc 1 chuỗi luôn là kí tự /0
	}
	return 0;
}