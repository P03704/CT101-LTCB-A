#include"stdio.h"

void nhapMang(int x[100], int &n){
	do{
		printf("Nhap vao so luong phan tu n=");
		scanf("%d", &n);	
	}while(n<1 || n>100);
	
	for(int i=0; i<n; i++){
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

void tachMang(int x[100], int n, int x1[100], int x2[100], int &n1, int &n2){
	int i1=0 ;
	n1=0;
	int i2=0;
	n2=0;
	
	for(int i=0; i<n; i++){
		if(i%2 != 0){
			x1[i1] = x[i];
			i1++;
			n1++;
		}else{
			x2[i2] = x[i];
			i2++;
			n2++;
		}
	}
}

int main(){
	int a[100], a1[100], a2[100], n, n1, n2;
	nhapMang(a, n);
	xuatMang(a, n);
	tachMang(a, n, a1, a2, n1, n2);
	xuatMang(a1, n1);
	xuatMang(a2, n2);
}
