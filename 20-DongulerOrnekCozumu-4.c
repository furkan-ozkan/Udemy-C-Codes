#include <stdio.h>
// Girilen sayi asal mý bulun.
main(){
	int sayi,i,asalMi=0;
	printf("Lutfen kontrol icin bir sayi girin : ");
	scanf("%d",&sayi);
	
	for(i=2 ; i<=sayi/2 ; i++){
		if(sayi%i==0){
			//asal olmadýgýný tespit ettiðimiz yer
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
