#include "stdio.h"

int main(){
	float s, tong=0;
	int n=1;
    
	do{
	printf("Nhap vao s=");     scanf("%f", &s);
	}while(s<1);
	
	while(tong<s){
		tong=tong+ (float) 1/n;
		if(tong>s){
			goto nhan;
		}
		++n;
	}
	nhan:printf("N=%d", n);
}