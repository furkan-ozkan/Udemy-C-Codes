#include <stdio.h>
// pointer ile diziler üzerinde denemeler yapalým.
main(){
	int sayilar[]={1,2,3};
	int *pointer;
	
	pointer=&sayilar;
	
	printf("%d\n",*pointer);
	printf("%d\n",*pointer+1);
	printf("%d\n",*pointer+2);
	printf("\n");
	printf("%x\n",pointer);
	printf("%x\n",pointer+1);
	printf("%x\n",pointer+2);
}
