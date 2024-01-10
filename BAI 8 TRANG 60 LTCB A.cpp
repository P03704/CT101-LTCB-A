#include "stdio.h"

int main(){
      int n;
      do{
      	printf("Nhap vao so duong co ba chu so n=");      scanf("%d", &n);
	  }while(n<100 || n>999);
	  
	int hangTram= n/ 100;
	int phandu= n-hangTram*100;
	int hangChuc= phandu/10;
	int hangDonVi= phandu-hangChuc*10;
	
	int chiahetchoba= hangDonVi+hangChuc+hangTram;
	
	if(chiahetchoba%3==0){
		printf("\nSo %d chia het cho 3", n);
	}else{
		printf("\nSo %d ko chia het cho 3", n);
	}
	  
}