#include <stdio.h>
// ortak bölenlerin en büyüðü.
main(){
	int sayi1=8,sayi2=24,i,j,obeb;
	
	if(sayi1<sayi2 && sayi2%sayi1==0){
		obeb=sayi1;
	}
	else if(sayi2<sayi1 && sayi1%sayi2==0){
		obeb=sayi2;
	}
	else{
		for(i=1;i<=sayi1/2;i++){
			if(sayi1%i==0){
				for(j=1;j<=sayi2/2;j++){
					if(sayi2%j==0 && j==i){
						obeb=i;
					}
				}
			}
		}
	}
	printf("%d",obeb);
	
	
}

/*
9 24
1 1
3 3
*/
