#include "stdio.h"

int main(){
	float r1, r2, r3, r, nghichDao_r;
	printf("Nhap vao dien tro R1=");      scanf("%f", &r1);
	printf("Nhap vao dien tro R2=");      scanf("%f", &r2);
	printf("Nhap vao dien tro R3=");      scanf("%f", &r3);
	nghichDao_r= (1/r1)+(1/r2)+(1/r3);
	r= 1/nghichDao_r;
	printf("Tong tro R= %.2f (Om)", r);
}