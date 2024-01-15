#include "stdio.h"

int main(){
	int so;
	do{
		printf("Nhap so nguyen duong co 3 chu so :");     scanf("%d", &so);
	}while(so< 100 || so > 999);
	
	int hangTram= so/ 100;
	int phandu= so-hangTram*100;
	int hangChuc= phandu/10;
	int hangDonVi= phandu-hangChuc*10;
	
	printf("Dao nguoc cua so nguyen duong 3 chu so la %d%d%d", hangDonVi, hangChuc, hangTram);
	
}