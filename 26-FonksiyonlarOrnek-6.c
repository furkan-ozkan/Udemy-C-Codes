#include <stdio.h>
// Yollanan sayi tek mi çift mi kontrol eden fonksiyon.
main(){
	int i;
	for(i=0;i<1000;i++){
		if(TCift(i)==1){
			printf("%d Tektir\n",i);
		}
	}
}

int TCift(int sayi){
	if(sayi%2==0){
		return 0;
	}
	return 1;
}
