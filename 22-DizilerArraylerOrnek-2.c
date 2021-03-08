#include <stdio.h>
//dizinin en küçük elemanýný bul
main(){
	int dizi[]={3,7,1,4,2,6},i,enKucuk=dizi[0];
	
	for(i=1;i<6;i++){
		if(dizi[i]<enKucuk){
			enKucuk=dizi[i];
		}
	}
	printf("Dizinin en kucuk elemani = %d",enKucuk);
	
}
