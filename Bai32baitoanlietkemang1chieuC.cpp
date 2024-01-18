#include"stdio.h"
int thoadieukien(int x){
	return (x%2==0 && x%3==0);
}

int main(int n){
	int a[100];
	do{
		printf("Voi (0<n<100) \nNhap vao so luong phan tu la:");
	    scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i=0 ;i <n;i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nCac so chan va chia het cho 3 la :");
	for(int i=0; i<n ;i++){
		if(thoadieukien(a[i]))
		printf(" %d  ", a[i]);
			
	}
}
