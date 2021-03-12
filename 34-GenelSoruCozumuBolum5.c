#include <stdio.h>
// perfect number 6 - 1-2-3   28 - 1-2-4-7-14
main(){
	int sayi,toplam=0,i;
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	for(i=1 ; i<=sayi/2 ; i++){
		if(sayi%i==0){
			toplam+=i;
		}
	}
	
	if(sayi==toplam){
		printf("Bu sayi bir \"Perfect Number\"!!");
	}else{
		printf("Bu degil!");
	}
	
}
