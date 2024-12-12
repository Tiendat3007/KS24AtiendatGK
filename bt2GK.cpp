#include<stdio.h>
int main(){
	const float TienH = 30000;
	float SoGio,TienLuong,TienLuongVaThuong;
	
	printf("hay nhap so gio lam:");
	scanf("%f",&SoGio);
	TienLuong = TienH * SoGio;
	if (SoGio>160){
		TienLuongVaThuong = TienLuong*0.1+TienLuong;
		printf("ban da lam duoc %.2f gio va so luong cua ban la : %.1f nghin dong",SoGio,TienLuongVaThuong);
	}else{
	printf("ban da lam duoc %.2f gio va so luong cua ban la : %.1f nghin dong",SoGio,TienLuong);
	}
	
	return 0;
}
