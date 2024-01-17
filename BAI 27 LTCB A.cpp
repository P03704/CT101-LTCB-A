#include "stdio.h"
#include "math.h"

int ktraSOnguyento(int x){
	for(int i=2; i<= sqrt(x); i++){
		if(x%i==0)
		return 0;
	}
	return 1;
}

int main(){
	int n;
	do{
		printf("Nhap vao n=");    scanf("%d", &n);
	}while(n<1);
	
	for(int i=2; i<=n; i++){
		if(ktraSOnguyento(i)==1){
			printf("%d ", i);
		}
	}
	printf("la cac so nguyen to");
}
