#include <stdio.h>
// Girilen sayının çarpanlarını bulun.
main(){
	int sayi,i;
	printf("Lutfen bir sayi girin : ");
	scanf("%d",&sayi);
	
	for(i=sayi/2 ; i>0 ; i--){
		if(sayi%i == 0){
			printf("Tam Bolen : %d\n",i);
		}
	}
	
}
