#include "stdio.h"

int main(){
	int thang, nam;
	do{
		printf("Thang:");       scanf("%d", &thang);
		printf("nam:");       scanf("%d", &nam);
	}while(thang<1 || thang>12 || nam< 0);
	
	switch(thang){
		case 4: case 6: case 9: case 11:
		printf("\nCo 30 ngay");
		break;
		
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("\nCo 31 ngay");
		break;
		
		case 2:
		if(nam%4==0){	
		printf("\nCo 29 ngay");	
		}else{
			printf("\nCo 28 ngay");
		}
		break;
	}
	return 0;
}