#include "stdio.h"

int main(){
	int n;
	do{
		printf("Nhap vao n=");      scanf("%d", &n);
	}while(n<2);
	
	int cout;
	for(int i=2; i<=n; i++){
		cout=0;
	    while(n%i==0){
	       ++cout;
	       n=n/i;
		}	
		if(cout){
			if(cout>1){
				printf("%d^%d", i, cout);
			}
			if(cout==1){
				printf("%d", i);
			}
			if(n>i){
				printf("*");
			}
		}
	}
}
    
