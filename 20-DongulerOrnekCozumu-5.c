#include <stdio.h>
// Girilen sayýnýn asal çarpanlarýný bulun.
main(){
	int sayi,i,asalMi=0,k;
	printf("Bir Sayi Girin : ");
	scanf("%d",&sayi);
	
	for(i=2 ; i<=sayi/2 ; i++){
		if(sayi%i==0){
			//i -> carpandir
			for(k=2 ; k<=i/2 ; k++){
				if(i%k==0){
					asalMi=1;
				}
			}
			if(asalMi==0){
				printf("%d Asal Bir Carpandir!\n",i);
			}
			asalMi=0;
		}
	}
	
}
