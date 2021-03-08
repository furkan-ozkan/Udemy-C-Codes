#include <stdio.h>
// girilen sayýdan 0'a kadar olan tüm sayýlarý toplayan recursive fonksiyonu yazýnýz.

int Topla(int);

main(){
	printf("%d",Topla(5));
}

int Topla(int sayi){
	if(sayi==0){
		return 0;
	}
	return Topla(sayi-1)+sayi;
}
