#include "stdio.h"
#include "math.h"

void nhapPhantu(int a[100], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");  scanf("%d", &n);
}while(n<1);
     
    for(int i=0; i<n; i++){
    	printf("\na[%d]=", i);  scanf("%d", &a[i]);
	}
}

int tinhTongBinhPhuong(int a[100], int n){
	int tong =0;
	for(int i=0; i<n; i++){
		int phantu;
		phantu= pow(a[i], 2);
		tong= tong + phantu;
	}
	
	printf("\n Tong binh phuong cac phan tu= %d", tong);
    return tong;
}

int main(){
	int a[100], n;
	nhapPhantu(a, n);
	tinhTongBinhPhuong(a, n);
}
