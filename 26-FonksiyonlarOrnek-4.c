#include <stdio.h>
// Kendisine bir uzunlu�u yollanan karenin alan�n� hesaplayan fonksiyonu yaz�n�z.
float AlanHesaplama(float);

main(){
	printf("Alan = %f",AlanHesaplama(7.63));
}

float AlanHesaplama(float kenar){
	return kenar*kenar;
}
