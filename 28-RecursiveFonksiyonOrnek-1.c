#include <stdio.h>
// girilen sayının faktoriyel hesabını yapan recursive yapı.

int fact(int);

main(){
	printf("%d",fact(5));
}

int fact(int sayi){
	if(sayi>=1){
		return sayi*fact(sayi-1);
	}
	else
		return 1;
}
