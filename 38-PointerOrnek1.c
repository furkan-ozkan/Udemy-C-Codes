#include <stdio.h>
// pointer mantýðýnda sýkýntý olmadýðýný kanýtlamak için pointer ile baþka bir pointerý aklýmýzda tutup onunlada bir deðiþkeni
// aklýmýzda tutup deðerini deðiþtirelim.
main(){
	int *p,*pp,x=5;
	
	pp=&x;
	p=pp;
	
	
	printf("p = %d\n",*p);
	printf("&x = %x\n",p);
	printf("&p = %x\n",&p);
	
	printf("pp = %x\n",*pp);
	printf("&pp = %x\n",&pp);
	
	printf("&x = %x\n",&x);
	printf("&x = %x\n",pp);
	
	
}
