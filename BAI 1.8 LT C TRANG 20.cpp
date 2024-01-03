#include "stdio.h"
int main(){
	int a, b;
	do{
		printf("nhap vao so thu nhat a= ");    scanf("%d", &a);
		printf("nhap vao so thu hai b= ");    scanf("%d", &b);
	}while(a<100 || b<100 || a>999 ||b>999);
	int du=b;
		int hangTram=b/100;    du=du-hangTram*100;
		int hangChuc=du/10;    du=du-hangChuc*10;
		int hangDonVi=du;
	printf("                     %d\n                    x\n                     %d\n                  ----------\n", a, b);
	printf("                     %d\n", a*hangTram);
	printf("                   \n");
	printf("                    %d\n", a*hangChuc);
	printf("                  \n");
	printf("                   %d\n", a*hangDonVi);
	printf("                 ----------\n");
	printf("                  %d\n\n\n\n\n\n\n\n\n\n",a*b);
}