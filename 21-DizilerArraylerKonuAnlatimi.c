#include <stdio.h>

main(){
	
	int sayilar[10000],i=0;
	
	while(i<10001){
		sayilar[i]=i;
		i++;
	}
	
	for(i=0 ; i<10001 ; i++){
		printf("%d\n",sayilar[i]);
	}
	
	
	/*
	int sayilar[]={5,2,6,1,9};
	printf("%d %d %d %d %d",sayilar[0],sayilar[1],sayilar[2],sayilar[3],sayilar[4]);
	*/
	
	/*
	int sayilar[5];
	
	sayilar[0]=5;
	sayilar[1]=2;
	sayilar[2]=6;
	sayilar[3]=1;
	sayilar[4]=9;
	
	printf("%d %d %d %d %d",sayilar[0],sayilar[1],sayilar[2],sayilar[3],sayilar[4]);
	*/
}
