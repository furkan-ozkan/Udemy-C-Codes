#include <stdio.h>
// strong number 145 - 1! + 4! + 5! = 145
main(){
	 int sayi=146,toplam=0,i,j,basamaklar[3],fact=1;
	 
	 basamaklar[2]=sayi%10;
	 basamaklar[1]=(sayi%100)/10;
	 basamaklar[0]=sayi/100;
	 
	 for(i=0;i<3;i++){
	 	if(basamaklar[i]==0 || basamaklar[i]==1){
	 		toplam+=1;
		}
		else{
			for(j=basamaklar[i] ; j>0 ; j--){
				fact*=j;
			}
			toplam+=fact;
			fact=1;
		}
	 }
	 if(toplam==sayi){
	 	printf("Strong Number!!");
	 }
	 else{
	 	printf("\n%d",toplam);
	 }
	 
}
