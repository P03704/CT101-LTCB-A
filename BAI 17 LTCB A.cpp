#include "stdio.h"

void nhapDayso(int a[100], int &n){
	do{
		printf("Moi ban nhap so luong phan tu n=");     scanf("%d", &n);
	}while(n<1 || n>100);
	printf("Moi ban nhap vao day so:\n");
	
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);      scanf("%d", &a[i]);
	}
}

 int timMaxvaVitriMax(int a[100], int n){
 	int max=a[0];   int vitrimax=0; 
 	for(int i=1; i<n; i++){
 		if(a[i]>max){
 			max=a[i];    vitrimax=i;
		 }		
	 }
	 printf("Gia tri lon nhat la %d tai vi tri %d", max, vitrimax);
	 return 0;
 }

int main(){
	int a[100], n;
	nhapDayso(a, n);
	timMaxvaVitriMax(a, n);
}
