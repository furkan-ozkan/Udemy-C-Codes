#include <stdio.h>
// kullan�c� 0 girene kadar de�er al�p ald��� de�erleri toplayan program.
main(){
	int sayi,toplam;
	printf("L�tfen bir sayi girin : ");
	scanf("%d",&sayi);
	while(sayi!=0){
		printf("L�tfen bir sayi girin : ");
		scanf("%d",&sayi);
		toplam+=sayi;
		printf("Toplam Sayi = %d\n",toplam);
	}
}
