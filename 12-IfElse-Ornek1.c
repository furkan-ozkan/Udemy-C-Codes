#include <stdio.h>
// Kullan�c�n�n girdi�i say�n�n pozitif negatif ve 0 olma durumu
main(){
	int sayi;
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	if(sayi>0){
		printf("Sayi Pozitif.");
	}
	else if(sayi<0){
		printf("Sayi Negatif");
	}
	else{
		printf("Sayi Sifir");
	}
	
}
