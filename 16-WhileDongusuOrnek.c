#include <stdio.h>
// kullanýcý 0 girene kadar deðer alýp aldýðý deðerleri toplayan program.
main(){
	int sayi,toplam;
	printf("Lütfen bir sayi girin : ");
	scanf("%d",&sayi);
	while(sayi!=0){
		printf("Lütfen bir sayi girin : ");
		scanf("%d",&sayi);
		toplam+=sayi;
		printf("Toplam Sayi = %d\n",toplam);
	}
}
