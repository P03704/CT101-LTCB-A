#include "stdio.h"

char c[3]= {'A', 'B', 'C'};

void thapHANOI(int n, int i, int j, int k){
	if(n==1){
		printf("\nChuyen dia %d tu cot %c sang cot %c", n, c[i], c[j]);
	}else{
		thapHANOI(n-1, i, k, j);
		printf("\nChuyen dia %d tu cot %c sang cot %c", n, c[i], c[j]);
		thapHANOI(n-1, k, j, i);
	}
}

int main(){
	int n;
	do{
		printf("Nhap so luong dia n=");    scanf("%d", &n);
	}while(n<1);
	thapHANOI(n, 0, 2, 1);
}