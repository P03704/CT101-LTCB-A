#include "stdio.h"
#include "math.h"

int giaiThua(int a){
	int giaithua=1;
	for(int i=2; i<=a; i++){
		giaithua=giaithua*i;
	}
	return giaithua;
}

void nhap(int &n, float &x){
	do{
		printf("Nhap n=");      scanf("%d", &n);
		printf("Nhap x=");      scanf("%f", &x);
	}while(n<1);
}

float tinhTong_cau_a(int n, float x){
	float tong1=0;
	for(int i=0; i<n; i++){
		tong1= tong1+ (float)(pow(x, i));
	}
	return tong1;
}

float tinhTong_cau_b(int n, float x){
	float tong2=0;
	for(int i=0; i<n; i++){
		tong2=tong2 +(float)(pow((-1), i)*pow(x, i));
	}
	return tong2;
}

float tinhTong_cau_c(int n, float x){
	float tong3=0;
	for(int i=0; i<n; i++){
		tong3=tong3 +(float)(pow(x, i)/giaiThua(i));
	}
	return tong3;
}

int main(){
	int n;    float x;
	nhap(n, x);
	printf("Tong cau a = %.2f", tinhTong_cau_a(n, x));
	printf("\nTong cau b = %.2f", tinhTong_cau_b(n, x));
	printf("\nTong cau c = %.2f", tinhTong_cau_c(n, x));	
}
