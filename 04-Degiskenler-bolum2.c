#include <stdio.h>

/*
	int		-2400400400 - 2400400400
	float	-2400400400.000000 - 2400400400.000000
	
	double	- Float
	long	- Int
	
	char	- k,l,1,9,., ,;,
*/

main(){
	float ondalikSayi=12.62;
	printf("%.2f\n",ondalikSayi);
	printf("%.3f\n",ondalikSayi);
	
	int sayi1=1,sayi2=2;
	printf("Degismeden Once Birinci Sayi = %d\nDegismeden Once Ikinci Sayi = %d\n",sayi1,sayi2);
	
	sayi1=2;
	sayi2=3;
	
	printf("Degistikten Sonra Birinci Sayi = %d\nDegistikten Sonra Ikinci Sayi = %d",sayi1,sayi2);
}
