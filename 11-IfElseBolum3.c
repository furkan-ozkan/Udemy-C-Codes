#include <stdio.h>

main(){
	int sayi;
	
	scanf("%d",&sayi);
	
	if(sayi < 5){
		printf("<5");
	}
	else if(sayi >= 5){
		printf(">5");
	}
	else if(sayi == 5){
		printf("=5");
	}
	else{
		printf("Bir hata var");
	}
	
}
/*
	-if 10< 5>
		-sayi 3.14
		-sayi 8.63
		-else
		
		&& ||
		
	-if
		-else if
		-...
		-else
*/
