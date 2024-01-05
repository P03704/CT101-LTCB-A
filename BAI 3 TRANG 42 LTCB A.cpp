#include "stdio.h"
#include "math.h"

int main(){
	float a, b, c, chuvi, dientich, p;
	printf("Nhap vao do dai 3 canh:");
	printf("\na=");    scanf("%f", &a);
	printf("b=");    scanf("%f", &b);
	printf("c=");    scanf("%f", &c);
	
	chuvi=a+b+c;
	p=chuvi/2;
	dientich= sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Chu vi = %.2f \nDien tich = %.2f", chuvi, dientich);
}