
#include "stdio.h"
#include "string.h"

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

struct sinhVien{
	char ten[50],  xepLoai[15];     float diem;
};

void nhapThongTin(sinhVien &sv){
	printf("\nNhap ten:");   fflush(stdin);   fgets(sv.ten, sizeof(sv.ten), stdin);   xoaXuongDong(sv.ten);
	do{
		printf("Nhap diem:");     scanf("%f", &sv.diem);
	}while(sv.diem<0 || sv.diem>10);
}

void xepLoai(sinhVien &sv){
	if(sv.diem >=9){
		strcpy(sv.xepLoai, "GIOI");
	}else if(sv.diem>=7 && sv.diem<9){
		strcpy(sv.xepLoai, "KHA");
	}else if(sv.diem>=5 && sv.diem<7){
		strcpy(sv.xepLoai, "TRUNG BINH");
	}else if(sv.diem<5){
		strcpy(sv.xepLoai, "KHONG DAT");
	}
}

void capNhatThongTin(sinhVien &sv){
	nhapThongTin(sv);       xepLoai(sv);
}

void nhapSinhvien(sinhVien danhsach[], int &n){
	do{
		printf("Moi ban nhap so luong sinh vien:");     scanf("%d", &n);
	}while(n<1 || n>40);
	for(int i=1; i<=n; i++){
		printf("Moi ban nhap thong tin sinh vien thu %d:", i);
		capNhatThongTin(danhsach[i]);      printf("\n\n");
	}
}

void xuatThongTin(sinhVien sv){
	printf("\t  %30s \t %22.2f \t %27s\t", sv.ten, sv.diem, sv.xepLoai);
}

void xuatDanhSachSinhVien(sinhVien danhsach[], int n){
	printf("%s %30s \t %30s \t %30s","STT", "TEN", "DIEM", "XEP LOAI");     printf("\n");
	for(int i=1; i<=n; i++){
		printf("%d", i);    xuatThongTin(danhsach[i]);      printf("\n");
	}
}

int main(){
	sinhVien danhsach[40];
	int n;
	nhapSinhvien(danhsach, n);
	xuatDanhSachSinhVien(danhsach, n);
	return 0;
}
