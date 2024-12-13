#include<stdio.h>
int main(){
	int Number,i;
	printf("hay nhap so tu nhien :");
	scanf("%d",&Number);
	for(i = 1; i <= Number; i++){
	if(Number%i==0){
		printf("%d la uoc cua %\n",i,Number);
	}
	}
	
	
 return 0;
	
	}
