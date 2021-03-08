#include <stdio.h>
// Kendisine bir uzunluðu yollanan karenin alanýný hesaplayan fonksiyonu yazýnýz.
float AlanHesaplama(float);

main(){
	printf("Alan = %f",AlanHesaplama(7.63));
}

float AlanHesaplama(float kenar){
	return kenar*kenar;
}
