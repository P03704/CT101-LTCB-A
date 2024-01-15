#include "stdio.h"
#include "math.h"

int main(){
	long n;
	printf("Nhap vao n=");     scanf("%d", &n);
	
	if(n==0){
		printf("So %d co 1 chu so", n);
	}
		
	for(int i=0; i<10; i++){
		if(pow(10, i)<=abs(n) && abs(n)<pow(10, (i+1))){
			printf("So %d co %d chu so!!!", n, (i+1));
		}		
	}		
} 
