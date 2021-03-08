#include <stdio.h>

void SelamVer();

main(){
	int sayi=5;
	SelamVer(sayi);
}

void SelamVer(int sayi){
	printf("%d\n",sayi);
	
	if(sayi>0){
		SelamVer(sayi-1);
	}
	return;
}
/*
12345
*/
