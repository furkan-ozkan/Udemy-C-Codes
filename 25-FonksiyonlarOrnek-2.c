#include <stdio.h>
// Kendisine yollanan sayiyi bir artt�ran fonksiyonu yaz�n�z.

int Up(int);

main(){
	int sayi=5;
	printf("%d\n",sayi);
	sayi=Up(sayi);
	printf("%d\n",sayi);
}

int Up(int sayi){
	return sayi+1;
}
