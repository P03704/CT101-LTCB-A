#include"stdio.h"

int main(){
	float a, b, tong, hieu, tich, thuong;
	printf("Nhap vao so a=");        scanf("%f", &a);
	printf("Nhap vao so b=");        scanf("%f", &b);
	
	tong= a+b;    hieu=a-b;    tich=a*b;    thuong=a/b;
	printf("a+b=%.2f", tong);
	printf("\na-b=%.2f", hieu);
	printf("\na*b=%.2f", tich);
	printf("\na/b=%.2f", thuong);
	
}