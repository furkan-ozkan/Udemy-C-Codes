#include <stdio.h>
// kullan�c� 0 girene kadar de�er al�p ald��� de�erleri toplayan program.
main(){
	int sayi,toplam;
	do{
		printf("L�tfen bir sayi girin : ");
		scanf("%d",&sayi);
		toplam+=sayi;
		printf("Toplam = %d\n",toplam);
	}while(sayi!=0);
}

/*
	yap{
	
	}oldugus�rece(ko�ul);
	
	do{
	
	}while(ko�ul);
*/
