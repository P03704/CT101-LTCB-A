#include "stdio.h"

int main(){
	int a, b, c, d, e, f;
	printf("Nhap so luong to 500.000 :");    scanf("%d", &a);
	printf("Nhap so luong to 100.000 :");    scanf("%d", &b);
	printf("Nhap so luong to 50.000 :");    scanf("%d", &c);
	printf("Nhap so luong to 5.000 :");    scanf("%d", &d);
	printf("Nhap so luong to 1.000 :");    scanf("%d", &e);
	printf("Nhap so luong to 2000 :");    scanf("%d", &f);
	int sum= 500000*a+100000*b+50000*c+5000*d+1000*e+200*f;
	printf("\nTong so tien la: %d (VN dong)",  sum);
}