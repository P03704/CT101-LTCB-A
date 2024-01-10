#include "stdio.h"

void swap(int &a, int &b){
	int temp=a;     a=b;  b=temp;
}

void nhapMang(int a[100], int &n){
	do{
		printf("Nhap vao so luogn phan tu n=");     scanf("%d", &n);
	}while(n<1 || n>100);
	printf("Moi ban nhap gia tri cua mang:\n");
	for(int i=0; i<n; i++){
		printf("a[%d]", i);      scanf("%d", &a[i]);
	}
}

void xuatMang(int a[100], int n){
	printf("Gia tri cua mang la:\n");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

void daoMang1(int a[100], int n){
	printf("\nMang dao nguoc bang cach in nguoc:");
	for(int i=n-1; i>=0; i--){
		printf("%d ", a[i]);
	}
}

void daoMang2(int a[100], int n){
	printf("\nDao mang bang cach hoan doi vi tri:");
	for(int i=0; i<n/2; i++){
		swap(a[i], a[n-1-i]);
	}
	xuatMang(a, n);
}

int main(){
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	daoMang1(a, n);
	daoMang2(a, n);
}
