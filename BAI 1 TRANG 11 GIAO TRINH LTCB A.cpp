#include "stdio.h"
#include "math.h"

int main(){
	float a, b, c, x, x_kep, x1, x2, delta;
	printf("Nhap vao he so phuong trinh :\n");
	printf("a="); scanf("%f", &a);
	printf("\nb="); scanf("%f", &b);
	printf("\nc="); scanf("%f", &c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("\nPhuong trinh co vo so nghiem!!!");
			}else{
				printf("\nPhuong trinh vo nghiem!!!");
			}
		}else{
			x=-c/b;
			if(x==-0){
				printf("\nPhuong trinh co nghiem x=0");
			}else{
			printf("\n Phuong trinh co nghiem x=%.2f", x);
			}
       	}
   }else{
	
	delta = pow(b, 2)- 4*a*c;
	printf("Gia tri cua delta = %.2f", delta);
	if(delta<0){
		printf("\nPhuong trinh vo nghiem!!!");
	}
	if(delta==0){
		x_kep=-b/2*a;
		printf("\nPhuong trinh co nghiem kep x=%.2f", x_kep);
	} 
	if(delta>0){
		x1=(-b-sqrt(delta))/2*a;
		x2=(-b+sqrt(delta))/2*a;
		printf("Phuong trinh co 2 nghiem phan biet:\n x1=%.2f \n x2=%.2f", x1, x2);
	}
  }  
}
