#include"stdio.h"

void nhapMatran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao so luong hang m=");
		scanf("%d", &m);
		printf("Nhap vao so luong cot n=");
		scanf("%d", &n);
	}while( n<1 || m<1 || n>100 || m>100 );
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}


void xuatMatran(int x[100][100], int m, int n){
	printf("\nGia tri cua ma tran la:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("\t%d\t", x[i][j]);
		}
		printf("\n\n");
	}
}


int main(){
	int a[100][100], m , n;
	nhapMatran(a, m , n);
	xuatMatran(a, m, n);
}
