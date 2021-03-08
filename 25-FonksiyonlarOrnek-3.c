#include <stdio.h>
// 4 işlem yapan bir program yazınız (fonksiyon kullanarak.)

int Toplama(int,int);
int Cikarma(int,int);
int Carpma(int,int);
int Bolme(int,int);

main(){
	printf("Toplam = %d\n",Toplama(8,956));
	printf("Fark = %d\n",Cikarma(8,956));
	printf("Carpim = %d\n",Carpma(8,956));
	printf("Bolum = %d\n",Bolme(8,956));
}

int Toplama(int sayi1,int sayi2){
	return sayi1+sayi2;
}

int Cikarma(int sayi1,int sayi2){
	if(sayi1>sayi2){
		return sayi1-sayi2;
	}else{
		return sayi2-sayi1;	
	}
}

int Carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}

int Bolme(int sayi1,int sayi2){
	if(sayi2!=0 && sayi1!=0){
		if(sayi1>sayi2){
			return sayi1/sayi2;
		}
		else{
			return sayi2/sayi1;
		}
	}
}
