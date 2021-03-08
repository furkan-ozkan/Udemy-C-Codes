#include <stdio.h>
// Girilen sayý kökten çýkýyor mu tespit edin.
main(){
	int sayi,i;
	printf("Bir sayi girin : ");
	scanf("%d",&sayi);
	
	if(sayi==1){
		printf("Kokten 1 olarak cikar.");
	}
	else if(sayi==4){
		printf("Kokten 2 olarak cikar.");
	}
	else if(sayi==9){
		printf("Kokten 3 olarak cikar.");
	}
	else{
		for(i=4 ; i<sayi/3 ; i++){
		if(i*i == sayi){
			printf("Kokten %d olarak cikar.",i);
		}
	}
	}
	
}
