#include "stdio.h"

int timMax(int a[100], int &n){
	
	do{
		printf("Nhap so luong phan tu n=");     scanf("%d", &n);
	}while(n<1 || n>100);
	
	printf("Moi ban nhap vao gia tri cac phan tu :\n");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);         scanf("%d", &a[i]);
	}
	
	int max= a[0];
	for(int i=0; i<n; i++){
			if(a[i] > max){
				max = a[i];
			}
	}
	printf("Gia tri lon nhat la: %d", max);
	return max;	
}

int main(){
	int a[100], n;
	timMax(a, n);
}