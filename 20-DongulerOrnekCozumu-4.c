#include <stdio.h>
// Girilen sayi asal m� bulun.
main(){
	int sayi,i,asalMi=0;
	printf("Lutfen kontrol icin bir sayi girin : ");
	scanf("%d",&sayi);
	
	for(i=2 ; i<=sayi/2 ; i++){
		if(sayi%i==0){
			//asal olmad�g�n� tespit etti�imiz yer
			asalMi=1;
		}
	}
	
	if(asalMi==0){
		printf("Sayi Asaldir!");
	}
	else{
		printf("Sayi Asal Degildir!");
	}
		
}
