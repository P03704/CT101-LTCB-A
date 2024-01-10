#include "stdio.h"
#include "math.h"

void nhapMang(int a[100], int &n){
	do{
		printf("Nhap so luong phan tu n=");     scanf("%d", &n);
	}while(n<1 || n>100);
	printf("Moi ban nhap gia tri cua mang:\n");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);       scanf("%d", &a[i]);
	}
}

int tinhTong(int a[100], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			tong=tong+pow(a[i], 2);
		}
	}
	return tong;
}

int main(){
	int a[100], n;
	nhapMang(a, n);
	printf("Gia tri cua tong binh phuong=%d", tinhTong(a, n));
}