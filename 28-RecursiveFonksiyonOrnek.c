#include <stdio.h>
// girilen say�dan 0'a kadar olan t�m say�lar� toplayan recursive fonksiyonu yaz�n�z.

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
