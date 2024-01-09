#include "stdio.h" 
#include "math.h"
int main(){
	int a, b;
	printf("Nhap gia tri vao a = ");
	scanf("%d", &a);
	printf("\nNhap gia tri vao b = ");
	scanf("%d", &b);
	
	
	float ketqua = (float) a/b;
	
	printf("\nfloor(a/b) = %.2f", floor(ketqua));
	printf("\nceil(a/b) = %.2f", ceil(ketqua));
	printf("\nsqrt(a) = %.2f", sqrt(a));
	printf("\nb^2 = %.2f", pow(b,2));
	printf("\n|a/b| = %.2f", fabs(ketqua));
	printf("\n|a| = %d", abs(a));
	
}
