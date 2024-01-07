#include"stdio.h"

void nhapMaTran(int a[100][100], int &m, int &n){
	do{
		printf("Moi ban nhap so luong hang m=");     scanf("%d", &m);
		printf("Moi ban nhap so luong cot n=");     scanf("%d", &n);
	}while(n<1 || m<1 || n>100 || n>100);
	
	printf("Moi ban nhap gia tri cua ma tran:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d]=", i, j);      scanf("%d", &a[i][j]);
		}
	}
}


 void xuatMaTran(int a[100][100], int m, int n){
 	printf("Gia tri cua ma tran la:\n");
 	for(int i=0; i<m; i++){
 		for(int j=0; j<n; j++){
 			printf("\t%d\t", a[i][j]);
		 }
		 printf("\n\n\n\n");
	 }
}

int timKiem(int a[100][100], int m, int n){
	int timkiem;   printf("Moi ban nhap vao gia tri can tim x=");     scanf("%d", &timkiem);
	int count=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]==timkiem){
				count++;
				printf("\nTai hang %d va cot %d",i , j);
			}
		}
	}
	printf("\nCo %d phan tu trung voi gia tri can tim!!!", count);
	return count;
}

int main(){
	int a[100][100], m ,n;
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	timKiem(a, m, n);
}
  