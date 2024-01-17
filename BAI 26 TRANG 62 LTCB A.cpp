#include "stdio.h"

void nhapSO(int &a, int &b){
	do{
	printf("Nhap a=");     scanf("%d", &a);
	printf("Nhap b=");     scanf("%d", &b);
	}while(a<2 || b<2);	
}

int timUCLL(int a, int b){
	int uocChungMax=1;
	if(a>b){
		for(int i=b; i>=1; i--){
			if(a%i==0 && b%i==0 && i>uocChungMax){
			uocChungMax	=i;
	    	}
		}
	}else{
		for(int i=a; i>=1; i--){
			if(a%i==0 && b%i==0 && i>uocChungMax){
			uocChungMax	=i;
	    	}
		}
	}
	return uocChungMax;
}

int timBCNN(int a, int b){
	int boiChungmin= a*b;
	if(a<b){
		for(int i=b; i<=boiChungmin; i++){
			if(i%a==0 && i%b==0 && i<boiChungmin){
				boiChungmin=i;
			}
		}
	}else{
		for(int i=a; i<= boiChungmin; i++){
			if(i%a==0 && i%b==0 && i<boiChungmin){
				boiChungmin=i;
			}
		}
	}
	return boiChungmin;
}

int main(){
	int a, b;
	nhapSO(a, b);
	printf("UCLN=%d", timUCLL(a, b));
	printf("\nBCNN=%d", timBCNN(a, b));
}
