#include <stdio.h>
// Kullanýcýnýn girdiði tek sayýlarý toplayýp çift sayýlarý çýkaran programý yazýnýz. program kullanýcý 0 girerse son bulsun.
main(){
	int sayi,toplam;
	
	do{
		printf("Lutfen bir sayi giriniz : ");
		scanf("%d",&sayi);
		
		if(sayi%2!=0){
			toplam+=sayi;
		}
		else{
			toplam-=sayi;
		}
		
		printf("Toplam : %d\n",toplam);
		
	}while(sayi!=0);
	
}
