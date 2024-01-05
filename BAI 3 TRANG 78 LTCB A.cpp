#include "stdio.h"

void nhapMang(int  a[], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");     scanf("%d", &n);
	}while(n<1 || n>100);
	
	printf("Moi ban nhap gia tri cua cac phan tu:\n");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);     scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n){
	printf("\nGia tri cua mang la:\n");
	for(int i=0; i<n; i++){
		printf(" %d ", a[i]);
	}
}


int timMax(int a[], int n){
	int max=a[0];
	for(int i=1; i<n; i++){
		if(a[i] > max){
			max=a[i];
		}
	}
	return max;
}

int timMin(int a[], int n){
	int min= a[0];
	for(int i=1; i<n; i++){
		if(a[i] < min){
			min=a[i];
		}
	}
	return min;
}

int tinhTong_cac_phantu_Mang(int a[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong=tong+a[i];
	}
	return tong;
}

int main(){
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nGia tri lon nhat cua mang la %d", timMax(a, n));
	printf("\nGia tri nho nhat cua mang la %d", timMin(a, n));
	printf("\nTONG= %d", tinhTong_cac_phantu_Mang(a, n));
}

