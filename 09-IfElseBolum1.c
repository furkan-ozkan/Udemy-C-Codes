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
	eðer(bu koþul saðlanýrsa){
		bu aralýkta bulunan iþlemleri yap.	
	}
	yukarýdaki koþulLAR saðlanmýyorsa{
		bu aralýkta bulunan iþlemleri yap.
	}
	
	if(koþul){
		iþlem
	}
	else {
		iþlem
	}

	sayi > 10
	sayi < 10
	sayi == 10
	sayi != 10
	sayi >= 10
	sayi <= 10
		
*/
