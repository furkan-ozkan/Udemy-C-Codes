#include <stdio.h>

main(){
	int x=10,y=5,*xp,*yp;
	xp=&x;
	yp=&y;
	
	SayiDegistirme(xp,yp);
	printf("x = %d\ny = %d",x,y);
}

SayiDegistirme(int *xp,int *yp){
	*xp=20;
	*yp=15;
}
