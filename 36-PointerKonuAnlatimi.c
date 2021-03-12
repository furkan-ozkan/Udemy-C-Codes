#include <stdio.h>

main(){
	int *xp;
	int x=5;
	
	xp=&x;
	
	printf("%d\n",*xp);
	printf("%d\n",x);
	printf("%d\n",xp);
	printf("%d\n",&x);
	
}
