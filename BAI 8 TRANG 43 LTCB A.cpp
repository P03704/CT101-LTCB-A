#include "stdio.h"

int main(){
	float toan, ly, hoa, diemTB;
	printf("Diem Toan=");      scanf("%f", &toan);
	printf("Diem Ly=");      scanf("%f", &ly);
	printf("Diem Hoa=");      scanf("%f", &hoa);
	
	diemTB= (toan+ly+hoa)/3;
	printf("Diem trung binh= %.2f", diemTB);
}