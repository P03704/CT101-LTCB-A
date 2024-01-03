#include"stdio.h"
#include"math.h"
int main(){
	float r, chuvi, dientich;
	printf("Nhap vao ban kinh r=");     scanf("%f", &r);
	chuvi= 2*3.14*r;
	dientich= 3.14*pow(r, 2);
	printf("Chu vi hinh tron la %.2f (dv chu vi)", chuvi);
	printf("\nDien tich cua hinh tron la %.2f (dv dien tich)", dientich);
}