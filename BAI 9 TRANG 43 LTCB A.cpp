#include "stdio.h"

int main(){
	int ngay, thang, nam;
	do{
		printf("Ngay:");       scanf("%d", &ngay);
		printf("Thang:");       scanf("%d", &thang);
		printf("Nam:");       scanf("%d", &nam);		
	}while(ngay<1 || ngay>31 || thang <1|| thang>12);
	
	printf("%d/ %d/ %d", ngay, thang, nam);
}