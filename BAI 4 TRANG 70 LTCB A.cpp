#include "stdio.h"

int main(){
	int n, temp;    printf("Nhap n=");      scanf("%d", &n);
	int tong=0;
	
	while(n>0){
		temp=n%10;
		tong= tong+ temp;
		n=(n-temp)/10;
	}
	printf("So tren %s het cho 3", (tong%3==0)?"chia":"khong chia");
}