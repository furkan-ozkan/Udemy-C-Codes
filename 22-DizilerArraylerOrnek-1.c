#include <stdio.h>
// kullanýcýdan aldýðýn 5 degeri 5 elemanlý bir diziye ata.
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
