#include <stdio.h>
// bir dizi olu�tur dizinin en b�y�k eleman�n� bul ve en ba�a koy.
main(){
	int dizi[]={3,6,2,4,1,7},enBuyuk=dizi[0],i,gecici=0,enBuyukIndex=0;
	
	for(i=0 ; i<6 ; i++){
		if(dizi[i]>enBuyuk){
			enBuyukIndex=i;
			enBuyuk=dizi[i];
		}
	}
	gecici=dizi[0];
	dizi[0]=enBuyuk;
	dizi[enBuyukIndex]=gecici;
	
	for(i=0 ; i<6 ; i++){
		printf("%d ",dizi[i]);
	}
	
	
}
