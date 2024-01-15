#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;  printf("Nhap vao n=");   scanf("%d", &n);
    float tong1=0, tong2=0, tong3=0;
    for(int i=1; i<=n; i++){
    	tong1= tong1+i; 
		tong2=tong2+ (float) i/(i+1);	
    	tong3=tong3+ pow((-1), i)*i;
	}
	
	printf("Cau a: tong=%.2f", tong1);
	printf("\nCau b: tong=%.2f", tong2);
	printf("\nCau c: tong=%.2f", tong3);
}
