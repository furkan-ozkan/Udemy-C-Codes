#include <stdio.h>
// kullan�c�dan ald���n 5 degeri 5 elemanl� bir diziye ata.
main(){
	int dizi[5],i;
	for(i=0;i<5;i++){
		printf("Bir sayi giriniz  : ");
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
}
