#include <stdio.h>
// kullanýcý 0 girene kadar deðer alýp aldýðý deðerleri toplayan program.
main(){
	int sayi,toplam;
	do{
		printf("Lütfen bir sayi girin : ");
		scanf("%d",&sayi);
		toplam+=sayi;
		printf("Toplam = %d\n",toplam);
	}while(sayi!=0);
}

/*
	yap{
	
	}oldugusürece(koþul);
	
	do{
	
	}while(koþul);
*/
