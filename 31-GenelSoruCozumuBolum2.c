#include <stdio.h>
//1-2-3-4-5 dizisini adým adým
//5-1-2-3-4    4-5-1-2-3   3-4-5-1-2    2-3-4-5-1    1-2-3-4-5
//þeklinde yazdýr
main(){
	int sayilar[]={1,2,3,4,5},gecici,i,k,j;
	
	for(i=0 ; i<5 ; i++){
		
		gecici=sayilar[4];
		
		for(k=4 ; k>0 ; k--){
			sayilar[k]=sayilar[k-1];
		}
		
		sayilar[0]=gecici;
		
		for(j=0 ; j<5 ; j++){
			printf("%d ",sayilar[j]);
		}
		printf("\n");
	}
	
	
}
