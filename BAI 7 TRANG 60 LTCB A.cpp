#include "stdio.h"
#include "math.h"

void nhapThoigian_va_von(int &n, float &von){
	do{
		printf("Nhap vao so thang gui tien n=");   scanf("%d", &n);
		printf("Nhap vao so tien von=");   scanf("%f", &von);		
	}while(n<1);
}



int soTien_laiLanloi_1Thang(int n, float von){
	float ti_le_1Thang= 0.024;
	float tien= von* pow((1+ti_le_1Thang), n);
	printf("\nSo tien lai lan loi cua phuong thuc khong thoi han la:%.2f", tien);
	return 0;
}



int soTien_laiLanloi_3Thang(int n, float von){
	float ti_le_3Thang=0.04;
	int chuki= n/3;
	float tien = von* pow((1+ti_le_3Thang), chuki);
	printf("\nSo tien lai lan loi cua phuong thuc 3 thang la: %.2f", tien);
	return 0;
}

int main(){
	int n;
	float von;
	nhapThoigian_va_von(n, von);
	soTien_laiLanloi_1Thang(n, von);
	soTien_laiLanloi_3Thang(n, von);
	return 0;
}
