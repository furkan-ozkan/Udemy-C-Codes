#include <stdio.h>
// 375 say�s�n�n 3-7-5 �eklinde basamaklar�na ula��n.
main(){
	int sayi=375;
	int birler,onlar,yuzler;
	
	birler = sayi%10;
	onlar = (sayi%100)/10;
	yuzler = sayi/100;
	
	printf("Birler = %d\nOnlar = %d\nYuzler = %d",birler,onlar,yuzler);
	
}
