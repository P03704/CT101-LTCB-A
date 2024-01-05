#include "stdio.h"
#include "math.h"
int main(){
	float a, b, x;
	printf("Nhap vao he so phuong trinh bac nhat: \n a=");
	scanf("%f", &a);
	printf("\n b=");
	scanf("%f", &b);
	
	if (a==0){
		if(b==0){
		printf("\n\n Phuong trinh co vo so nghiem");
		}else{
    	printf("\n\n Phuong trinh vo nghiem");			
		}
	}else{
		x=-b/a;
		printf("\n\n Phuong trinh co nghiem x= %.2f", x);
	}
}
