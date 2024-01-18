#include"stdio.h"

void nhapMang(int x[100], int &n){
	do{
		printf("\nNhap so luong phan tu n=");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i=0; i<n ;i++){
		printf("a[%d]=", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("\nGia tri cua mang la:");
	for(int i=0; i<n; i++){
		printf(" %d ", x[i]);	
	}
}

int kiemTraMangcon(int x1[100], int x2[100], int n1, int n2){
	int ketqua=0;
	if(n2<=n1){
		for(int i=0; i<n1; i++){
			if(x1[i] == x2[0]){
				int j;
				for(int j=0; j< n2; j++){
					if(x1[i+j] != x2[j])
					break;
				}
				if (j ==n2)
				return ketqua = 1;
			}
		}
	}
	return ketqua=0;
}

int main(){
	int a[100], b[100], n1, n2;
	nhapMang(a, n1);
	xuatMang(a, n1);
	nhapMang(b, n2);
	xuatMang(b, n2);
	
	int ket_qua = kiemTraMangcon(a , b, n1, n2);
	if(ket_qua = 0){
		printf("\nMang b khong la mang con cua mang a");
	}else(ket_qua=1);{
		printf("\nMang b phai la mang con cua mang b");
	}	
}
