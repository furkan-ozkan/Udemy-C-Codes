#include <stdio.h>
// Kendisine yollanan 5 sayýnýn ortalamasýný bulan fonksiyon.

float Ortalama(float,float,float,float,float);

main(){
	printf("%f",Ortalama(5.63,10.87,15.916,20.1234,25.8723));
}

float Ortalama(float sayi1,float sayi2,float sayi3,float sayi4, float sayi5){
	return (sayi1+sayi2+sayi3+sayi4+sayi5)/5;
}
