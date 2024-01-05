#include "stdio.h"

void nhapMang(int a[], int &n){
	printf("Moi ban nhap vao so luong phan tu n=");    scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);    scanf("%d", &a[i]);
	}
}

void in(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]<x){
			printf("%d ", a[i]);
		}
	}
}

int main(){
	int a[99], n, x;
	nhapMang(a, n);
	printf("Moi ban nhap phan tu can xet x=");    scanf("%d", &x);
	in(a, n, x);
}