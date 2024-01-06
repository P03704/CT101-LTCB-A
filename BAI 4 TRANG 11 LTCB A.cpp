#include "stdio.h"

void swap(int &a, int &b){
	int temp = a ;
	a = b;
	b = temp;
}
 void nhapPhanTu(int x[100], int &n){
 	do{
 		printf("Nhap vao so luong phan tu n=");   scanf("%d", &n);
	 }while(n<1 || n>100);
	 
	 printf("Moi ban nhap gia tri cua cac phan tu:\n");
	 for(int i=0; i<n; i++){
	 	printf("a[%d]= ", i);    scanf("%d", &x[i]);
	 }
}

void xuatPhanTu(int x[100], int n){
	printf("\nGia tri tang dan cua phan tu la :\n");
	for(int i=0; i<n; i++){
		printf(" %d ", x[i]);
	}
}


void sapXeptangDan(int x[100], int n){
	for(int i=0; i<n-1; i++){
		 int vitrinhonhat =i;
		for(int j=i+1; j<n; j++){
			if(x[vitrinhonhat] >= x[j]){
				vitrinhonhat = j;
			}
			swap(x[vitrinhonhat], x[i]);
		}
	}
}

int main(){
	int a[100], n;
	nhapPhanTu(a, n);
	sapXeptangDan(a, n);
	xuatPhanTu(a, n);
}
