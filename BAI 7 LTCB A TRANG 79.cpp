#include "stdio.h"

void nhapMang(int a[100], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");     scanf("%d", &n);
	}while(n<1 ||n>100);
	printf("Moi ban nhap gia tri cua mang:\n");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);   scanf("%d", &a[i]);  
	}
}

int ktraChanLe(int x){
	if(x%2==0)   return 1;
	else  return 0;
}

int kiem_tra_so_nguyen_to (int x){
	if (x<=1)
	return 0;
	
	for (int i=2; i<=x-1; i++){
		if (x%i==0)
		return 0;
	}
	return 1;
}

void xuatChan(int a[100], int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(ktraChanLe(a[i])==1){
			count++;
			printf("%d ", a[i]);
		}
	}
	printf("\t\tCo %d so chan!!!\n", count);
}

void xuatLe(int a[100], int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(ktraChanLe(a[i])==0){
			count++;
			printf("%d ", a[i]);
		}
	}
	printf("\t\tCo %d so le!!!\n", count);
}

void xuatSoNguyenTo(int a[100], int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(kiem_tra_so_nguyen_to(a[i])==1){
			count++;
			printf("%d ", a[i]);
		}
	}
	printf("\t\tCo %d so nguyen to!!!\n", count);
}

void xuatSoKhongPhaiNguyenTo(int a[100], int n){
	int count=0;
	for(int i=0; i<n; i++){
		if(kiem_tra_so_nguyen_to(a[i])==0){
			count++;
			printf("%d ", a[i]);
		}
	}
	printf("\t\tCo %d so khong phai la so nguyen to!!!\n", count);
}



int main(){
	int a[100], n;
	nhapMang(a, n);
	xuatChan(a, n);
	xuatLe(a, n);
	xuatSoNguyenTo(a, n);
	xuatSoKhongPhaiNguyenTo(a, n);
}
