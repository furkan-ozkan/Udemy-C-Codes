#include <stdio.h>
// Kullanýcýnýn girdiði notun harf notu karþýlýðýný veren program.
/*
	100-90 	AA
	90-80	BA
	80-70	BB
	70-60	CB
	60-0	FF
*/
main(){
	int sinavNotu;
	printf("Lutfen sinav notunuzu giriniz : ");
	scanf("%d",&sinavNotu);
	
	if(sinavNotu>100 || sinavNotu<0){
		printf("Gecersiz bir not girdiniz!!!");
	}
	else if(sinavNotu>=90){
		printf("AA");
	}
	else if(sinavNotu>=80){
		printf("BA");
	}
	else if(sinavNotu>=70){
		printf("BB");
	}
	else if(sinavNotu>=60){
		printf("CB");
	}
	else{
		printf("KALDINIZ!!");
	}
	
}
