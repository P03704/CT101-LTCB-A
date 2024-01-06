#include "stdio.h"
#include "math.h"

int main(){
	float x, a;
	do{
		printf("x=");     scanf("%f", &x);
		printf("a=");     scanf("%f", &a);
	}while(x<= 0 || a<=1);
	
	float logarit= log(x)/log(a);
	printf("log aX= %.2f", logarit);
}