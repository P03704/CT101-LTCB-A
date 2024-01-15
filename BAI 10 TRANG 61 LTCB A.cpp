#include "stdio.h"

int main(){
	int chisodiencu, chisodienmoi, sodiendasudung, tiendien_dinhmuc, tien_phat, tong, sodienvuot_dinhmuc;	
	printf("Nhap vao so dien cu=");     scanf("%d", &chisodiencu);
	printf("Nhap vao so dien moi=");     scanf("%d", &chisodienmoi);
	
	sodiendasudung=chisodienmoi-chisodiencu;
	
	if(sodiendasudung<=50){
		tiendien_dinhmuc= sodiendasudung*450;
		tien_phat=0;
	}
	
	if(100>sodiendasudung>50){
		sodienvuot_dinhmuc=sodiendasudung-50;
	    tiendien_dinhmuc=50*450;
	    tien_phat= sodienvuot_dinhmuc*700;
	}
	
	if(150>sodiendasudung>100){
		sodienvuot_dinhmuc=sodiendasudung-50;
	    tiendien_dinhmuc=50*450;
	    tien_phat= sodienvuot_dinhmuc*910;
	}
	
	if(sodiendasudung>150){
		sodienvuot_dinhmuc=sodiendasudung-50;
	    tiendien_dinhmuc=50*450;
	    tien_phat= sodienvuot_dinhmuc*1200;
	}
	
	tong= tiendien_dinhmuc+tien_phat;
    printf("\nTien dien dinh muc=%d (dong)", tiendien_dinhmuc);
    printf("\nTien phat=%d (dong)", tien_phat);
    printf("\nTong=%d (dong)", tong);

}