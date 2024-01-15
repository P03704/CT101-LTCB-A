#include "stdio.h"

int main(){
	int gio, phut, giay, soGiaycongThem;
	
	do{
		printf("Nhap gio:");     scanf("%d", &gio);
		printf("Nhap phut:");     scanf("%d", &phut);
		printf("Nhap giay:");     scanf("%d", &giay);
	}while(giay<0 || giay>=60 || phut<0 || phut>=60 || gio<0 || gio >=24);
	
	printf("Thoi gian ban da nhap: %d gio %d phut %d giay\n", gio, phut, giay);
	printf("Moi ban nhap vao so giay cong them:");   scanf("%d", &soGiaycongThem);
	
	int hanggio= soGiaycongThem/3600;
	int sogiaydu= soGiaycongThem-hanggio*3600;
	int hangphut= sogiaydu/60;
	int hanggiay=sogiaydu-hangphut*60;
	
	gio= gio+hanggio;
	phut= phut+hangphut;
	giay=giay+hanggiay;
	
	printf("\nThoi gian moi la:%d gio %d phut %d giay", gio, phut, giay);
}
		