#include <stdio.h>

main(){
	int sayi;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	if(sayi>=0){
		printf("Sayi pozitif");
	}
	else{
		printf("Sayi negatif");
	}
	
}

/*
	e�er(bu ko�ul sa�lan�rsa){
		bu aral�kta bulunan i�lemleri yap.	
	}
	yukar�daki ko�ulLAR sa�lanm�yorsa{
		bu aral�kta bulunan i�lemleri yap.
	}
	
	if(ko�ul){
		i�lem
	}
	else {
		i�lem
	}

	sayi > 10
	sayi < 10
	sayi == 10
	sayi != 10
	sayi >= 10
	sayi <= 10
		
*/
