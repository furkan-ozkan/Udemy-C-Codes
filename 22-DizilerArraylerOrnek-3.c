#include <stdio.h>
// dizinin en küçük ve en büyük elemanlarýnýn indexlerini bul
main(){
	int dizi[]={3,7,1,4,2,6},i,enKucuk=dizi[0],enKucukIndex=0,enBuyuk=dizi[0],enBuyukIndex=0;
	
	for(i=0;i<6;i++){
		if(dizi[i]<enKucuk){
			enKucuk=dizi[i];
			enKucukIndex=i;
		}
		if(dizi[i]>enBuyuk){
			enBuyuk=dizi[i];
			enBuyukIndex=i;
		}
	}
	printf("%d %d",enKucukIndex,enBuyukIndex);
}
