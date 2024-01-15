#include"stdio.h"

void nhapMaTran1(int a[100][100], int &m, int &n){
	printf("MA TRAN 1:\n");
	do{
		printf("So hang m1="); scanf("%d", &m);
		printf("So cot n1="); scanf("%d", &n);
	}while(m<1 || m>100 || n<1 || n>100);
	printf("Moi ban nhap gia tri cua ma tran 1:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d]=", i, j);        scanf("%d", &a[i][j]);
		}
	}
} 

void xuatMaTran1(int a[100][100], int m, int n){
	printf("Gia tri cua ma tran 1 la :\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("\t%d\t", a[i][j]);
		}
		printf("\n\n\n\n");
	}
}   

void nhapMaTran2(int b[100][100], int &m, int &n){
	printf("\n\nMA TRAN 2:\n");
	do{
		printf("So hang m2="); scanf("%d", &m);
		printf("So cot n2="); scanf("%d", &n);
	}while(m<1 || m>100 || n<1 || n>100);
	printf("Moi ban nhap gia tri cua ma tran 2:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("b[%d][%d]=", i, j);        scanf("%d", &b[i][j]);
		}
	}
} 

void xuatMaTran2(int b[100][100], int m, int n){
	printf("Gia tri cua ma tran 2 la :\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("\t%d\t", b[i][j]);
		}
		printf("\n\n\n\n");
	}
}  

int tinhTong(int a[100][100], int m, int n){
	int tong=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			tong=tong+a[i][j];
		}
	}
	return tong;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

int main(){
	int a[100][100], b[100][100], m, n;
	nhapMaTran1(a, m, n);
	nhapMaTran2(b, m, n);
	xuatMaTran1(a, m, n);
	xuatMaTran2(b, m, n);
	printf("Tong cua 2 ma tran A va B la C \n =====> Tong C= %d", tinhTong(a, m, n)+ tinhTong(b, m, n));
}
