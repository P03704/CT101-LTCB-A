#include "stdio.h"
#include "math.h"

void nhapPhanTu(int a[100], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");    scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i=0; i<n ; i++){
		printf("a[%d]=", i);  scanf("%d", &a[i]);
	}
}

int tinhTong(int a[100], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		int phantu;
		phantu= pow(-1, i)*pow(a[i], 2);
		tong = tong + phantu;
	}
	printf("Gia tri cua tong= %d", tong);
	return tong;
}

int main(){
    int a[100], n;
    nhapPhanTu(a, n);
    tinhTong(a, n);
}
