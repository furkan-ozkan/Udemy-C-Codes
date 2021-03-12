#include <stdio.h>
// 375 sayýsýnýn 3-7-5 þeklinde basamaklarýna ulaþýn.
main(){
	int sayi=375;
	int birler,onlar,yuzler;
	
	birler = sayi%10;
	onlar = (sayi%100)/10;
	yuzler = sayi/100;
	
	printf("Birler = %d\nOnlar = %d\nYuzler = %d",birler,onlar,yuzler);
	
}
