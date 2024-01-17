#include "stdio.h"

int main(){
	int n, tich=1;
	do{
		printf("Nhap vao n=");     scanf("%d", &n);
	}while(n<1);
	
	for(int i=1; i<=n; i++){
		tich=tich*(2*i);
	}
	printf("P=%d", tich);
}