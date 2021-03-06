#include <stdio.h>
// 3 sayýnýn en büyüðünü bulmak
main(){
	int sayi1=7,sayi2=9,sayi3=1;
	
	if(sayi1>sayi2){
		if(sayi1>sayi3){
			printf("Sayi1 En Büyük Sayidir : %d",sayi1);
		}
		else{
			printf("Sayi3 En Büyük Sayidir : %d",sayi3);
		}
	}
	else{
		if(sayi2>sayi3){
			printf("Sayi2 En Buyuk Sayidir : %d",sayi2);
		}
		else{
			printf("Sayi3 En Büyük Sayidir : %d",sayi3);
		}
	}
	
	
	
	/*
	int sayi1=7,sayi2=9,sayi3=1,enBuyuk=0;
	
	if(sayi1>enBuyuk){
		enBuyuk=sayi1;
	}
	if(sayi2>enBuyuk){
		enBuyuk=sayi2;
	}
	if(sayi3>enBuyuk){
		enBuyuk=sayi3;
	}
	printf("En buyuk sayi = %d",enBuyuk);
	*/
	
}
