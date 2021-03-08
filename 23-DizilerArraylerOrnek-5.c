#include <stdio.h>
// 1-2-3-4-4-5-6-7 ve bu dizide tekrar eden rakamý buldur.
main(){
	int dizi[]={1,2,3,4,4,5,6,7,7},i,k;	
	
	for(i=0;i<9;i++){
		for(k=i+1;k<9;k++){
			if(dizi[i]==dizi[k]){
				printf("%d ",dizi[i]);
			}
		}
	}
}
