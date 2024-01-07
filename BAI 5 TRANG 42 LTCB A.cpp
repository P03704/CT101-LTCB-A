#include "stdio.h"
#include "math.h"

int main(){
	float x1, y1, x2, y2, hsGoc, d;
	printf("Nhap vao toa do diem thu nhat:\n x1=");     scanf("%f", &x1);
	printf(" y1=");   scanf("%f", &y1);
	printf(" x2=");   scanf("%f", &x2);
	printf(" y2=");   scanf("%f", &y2);
	
	hsGoc= (y2-y1)/(x2-x1);
	d= sqrt(pow((y2-y1), 2) + pow((x2-x1), 2));
	
	printf("He so goc = %.2f", hsGoc);
	printf("\nKhoang cach = %.2f", d);
}