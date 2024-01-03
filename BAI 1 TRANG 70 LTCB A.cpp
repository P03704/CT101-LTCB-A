#include "stdio.h"

int main(){
	int a, b;
	printf("Nhap vao a=");    scanf("%d", &a);
	printf("Nhap vao b=");    scanf("%d", &b);
	if(a<b){
		printf("So lon nhat la %d", b);
	}else{
		printf("So lon nhat la %d", a);
	}
	return 0;
}