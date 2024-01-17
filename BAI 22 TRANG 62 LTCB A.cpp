#include "stdio.h"

void nhapDayso(float a[100], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");      scanf("%d", &n);
	}while(n<1);
	
	printf("Moi ban nhap gia tri cua day so:\n");
	for (int i=0; i<n-1; i++){
		printf("a[%d]=", i);       scanf("%f", &a[i]);
	}
	printf("a[%d]=-1", n-1);
}

void xuatDay(float a[100], int n){
	printf("\nGia tri cua day:\n");
	for(int i=0; i<n-1; i++){
		printf("%.2f ", a[i]); 	
	}
	printf("-1");
}

int tinhTb(float a[100], int n){
	float tong=0;      float tb;     a[n-1]=-1;
	for(int i=0; i<n-1; i++){
		tong= tong+a[i];
	}
	tb=(tong+a[n-1])/n;
	printf("\nTB=%.2f", tb);
	return tb;
}


int main(){
	float a[100];     int n;
	nhapDayso(a, n);
	xuatDay(a, n);
	tinhTb(a, n);
}
