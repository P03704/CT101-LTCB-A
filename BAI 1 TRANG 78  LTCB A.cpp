#include "stdio.h"

void swap(float &a, float &b){
	float temp = a;       a=b;       b=temp;
}

void nhapMang(float a[], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");     scanf("%d", &n);
	}while(n<1 || n>100);
	
	printf("Moi ban nhap gia tri cua cac phan tu:\n");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);     scanf("%f", &a[i]);
	}
}

void xuatMang(float a[], int n){
	printf("Gia tri cua mang la:\n");
	for(int i=0; i<n; i++){
		printf(" %.2f ", a[i]);
	}
}

void sapXepGiamDan(float a[], int n){
	int viTrimax;
	for(int i=0; i<n-1; i++){
		viTrimax=i;
		for(int j=i+1; j<n; j++){
			if(a[j] > a[viTrimax]){
				swap(a[j], a[viTrimax]);
			}
		}
	}
}


int main(){
	float a[100];    int n;
	nhapMang(a, n);
	sapXepGiamDan(a, n);
	xuatMang(a, n);
}
