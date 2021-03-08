#include <stdio.h>
// dizinin en küçük ve en büyük elemanlarýnýn indexleri arasnda kalan diger indexlerin deðerlerini yazdýr.
main(){
	int dizi[]={3,7,6,4,1,6},i,enKucuk=dizi[0],enKucukIndex=0,enBuyuk=dizi[0],enBuyukIndex=0;
	
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
	
	if(enBuyukIndex>enKucukIndex){
		for(i=enKucukIndex+1 ; i<enBuyukIndex ; i++){
			printf("%d ",dizi[i]);
		}
	}
	else{
		for(i=enBuyukIndex+1 ; i<enKucukIndex ; i++){
			printf("%d ",dizi[i]);
		}
	}
	
	
}
