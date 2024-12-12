#include<stdio.h>
int main(){
	int i;
	float TienDoi,TienHoi;
	printf("(1) USD==>VND\n(2) EUR==>VND\n(3) GBP==>VND\n(4) JPY==>VND\n");
	printf("hay nhap loai tien muon doi:");
	scanf("%d",&i);
	printf("hay nhap so tien muon doi:");
	scanf("%f",&TienDoi);
	switch (i){
		case 1:
		TienHoi = TienDoi * 23500;
		printf("so tien %.2f USD doi duoc = %.2f VND",TienDoi,TienHoi);
		break;
		case 2:
		TienHoi = TienDoi * 25000;
		printf("so tien %.2f EUR doi duoc = %.2f VND",TienDoi,TienHoi);
		break;
		case 3:
		TienHoi = TienDoi * 28000;
		printf("so tien %.2f GBP doi duoc = %.2f VND",TienDoi,TienHoi);
		break;
		case 4:
		TienHoi = TienDoi * 180;
		printf("so tien %.2f JYP doi duoc = %.2f VND",TienDoi,TienHoi);
		
	}
	

	return 0;
}
