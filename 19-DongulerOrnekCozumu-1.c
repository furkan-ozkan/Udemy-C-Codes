#include <stdio.h>
// Çarpým tablosunu döngüleri kullanarak yazdýrýn.
main(){
	int i,k;
	
	for(i=1;i<=10;i++){
		for(k=1;k<=10;k++){
			printf("%d x %d = %d\n",i,k,i*k);
		}
		printf("\n");
	}
	
}
