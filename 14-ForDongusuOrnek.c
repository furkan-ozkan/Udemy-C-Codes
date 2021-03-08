#include <stdio.h>
// 0-x arasý(x kullanýcýdan alýnsýn) tek sayýlarý bulun.
main(){
	int sayi,i;
	printf("Lutfen bir sayi girin : ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++){
		if(i%2==1){
			printf("Tek Sayi : %d\n",i);
		}
	}
	
}
