#include "stdio.h"
#include "math.h"

struct PhanSo{
	int tuSo, mauSo;
};

void rutGonPhanSo(PhanSo *ps){
	int a= ps->tuSo,      b= ps->mauSo;
	a=abs(a);
	b=abs(b);
	int uocChungMax=1;
	if(a==0 || b==0){
		uocChungMax=a+b;
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		uocChungMax=a;
	}
	ps->tuSo/=uocChungMax;               ps->mauSo/=uocChungMax;
}

void nhapPhanSo(PhanSo *ps){
	printf("Nhap vao tu so:");      scanf("%d", &ps->tuSo);
	do{
		printf("nhap vao mau so:");     scanf("%d", &ps->mauSo);
	}while(ps->mauSo==0);
}

void xuatPhanSo(PhanSo ps){
	if(ps.mauSo<0){
		ps.mauSo= ps.mauSo*(-1);
		ps.tuSo= ps.tuSo*(-1);
	}
	rutGonPhanSo(&ps);
	if(ps.mauSo==1){
		printf("%d", ps.tuSo);
	}else{
		printf("%d/%d", ps.tuSo, ps.mauSo);
	}
}

PhanSo congHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo Ketqua;
	Ketqua.tuSo= ps1.tuSo*ps2.mauSo+ ps1.mauSo*ps2.tuSo;
	Ketqua.mauSo= ps1.mauSo*ps2.mauSo;
	return Ketqua;
}

PhanSo truHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo Ketqua;
	Ketqua.tuSo= ps1.tuSo*ps2.mauSo - ps1.mauSo*ps2.tuSo;
	Ketqua.mauSo= ps1.mauSo*ps2.mauSo;
	return Ketqua;
}

PhanSo nhanHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo Ketqua;
	Ketqua.tuSo= ps1.tuSo*ps2.tuSo;
	Ketqua.mauSo= ps1.mauSo*ps2.mauSo;
	return Ketqua;
}

PhanSo chiaHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo Ketqua;
	Ketqua.tuSo= ps1.tuSo*ps2.mauSo;
	Ketqua.mauSo= ps1.mauSo*ps2.tuSo;
	return Ketqua;
}


int main(){
	PhanSo ps1, ps2;
	printf("Moi ban nhap phan so thu nhat:\n");     nhapPhanSo(&ps1);
	printf("Phan so thu nhat:");     xuatPhanSo(ps1);
	printf("\n\nMoi ban nhap phan so thu hai:\n");     nhapPhanSo(&ps2);
	printf("Phan so thu hai:");     xuatPhanSo(ps2);
	
	printf("\n\nCong hai phan so:");
    xuatPhanSo(ps1);    printf("+");   xuatPhanSo(ps2);    printf("=");   xuatPhanSo(congHaiPhanSo(ps1, ps2));
    
    printf("\n\nTru hai phan so:");
    xuatPhanSo(ps1);    printf("-");   xuatPhanSo(ps2);    printf("=");   xuatPhanSo(truHaiPhanSo(ps1, ps2));
	
	printf("\n\nNhan hai phan so:");
    xuatPhanSo(ps1);    printf("*");   xuatPhanSo(ps2);    printf("=");   xuatPhanSo(nhanHaiPhanSo(ps1, ps2));
    
    printf("\n\nChia hai phan so:");
    xuatPhanSo(ps1);    printf(":");   xuatPhanSo(ps2);    printf("=");   xuatPhanSo(chiaHaiPhanSo(ps1, ps2));
}
