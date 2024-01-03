#include <stdio.h>

void nhapMang(int a[], int &n){
	printf("Moi ban nhap vao so luong phan tu n=");    scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);    scanf("%d", &a[i]);
	}
	printf("\n");
}

void xuatMang(int a[], int n){
	printf("Gia tri cua mang la:\n");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");	
}

void chen(int a[], int &n, int x, int k){
	if(k>n-1){
		printf("Kich thuoc cua mang da toi da hoac vi tri k khong hop le!!!");
	}else{
		n++;
		for(int i=n-1; i>k; i--){
			a[i]=a[i-1];
		}
		a[k]=x;
	}
	printf("\n");
}

int main(){
	int a[99], n, x, k;
	printf("Moi ban nhap vao gia tri can chen x=");   scanf("%d", &x);
	printf("Tai vi tri k=");    scanf("%d", &k);
	nhapMang(a, n);
	xuatMang(a, n);
	chen(a, n, x, k);
	xuatMang(a, n);
}
