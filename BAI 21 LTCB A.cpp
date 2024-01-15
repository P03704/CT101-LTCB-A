#include "stdio.h"

int main(){
	int n, temp;     printf("Nhap vao n=");      scanf("%d", &n);
    int daonguoc=0;
	while (n>0){
		temp=n%10;
		daonguoc=daonguoc*10+temp;
		n=n/10;
	}
     printf("So dao nguoc la: %d", daonguoc);
}