#include "stdio.h"
#include "math.h"
int main(){
	float xA, yA, xB, yB, xC, yC, AB, BC, CA, chu_vi_P, dien_tich_S, p;
	
	printf("Nhap vao toa do dinh A: \nxA=" );
	scanf("%f", &xA);
	printf("yA=");
	scanf("%f", &yA);
	
	printf("\nNhap vao toa do dinh B: \nxB=" );
	scanf("%f", &xB);
	printf("yB=");
	scanf("%f", &yB);
	
	printf("\nNhap vao toa do dinh C: \nxC=" );
	scanf("%f", &xC);
	printf("yC=");
	scanf("%f", &yC);
		
	AB=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
	BC=sqrt(pow(xB-xC,2)+pow(yB-yC,2));
	CA=sqrt(pow(xC-xA,2)+pow(yC-yA,2));
	
	printf("AB=%.2f    BC=%.2f    CA=%.2f", AB, BC, CA);
	if( AB+BC>CA && BC+CA>AB && CA+AB>BC ){
		printf("\n\nABC la 1 tam giac ");
	}else{
		printf("\n\nABC khong phai la tam giac");
	}
	if(AB+BC>CA && BC+CA>AB && CA+AB>BC){
		chu_vi_P= AB+BC+CA;
		p= chu_vi_P/2;    
		dien_tich_S=sqrt(p*(p-AB)*(p-BC)*(p-CA));
		printf("\nchu_vi_P=%.2f (cm) \np= %.2f (cm) \ndien_tich_S=%.2f (cm^2)", chu_vi_P, p, dien_tich_S);
	}

}
