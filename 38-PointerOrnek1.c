#include <stdio.h>
// pointer mant���nda s�k�nt� olmad���n� kan�tlamak i�in pointer ile ba�ka bir pointer� akl�m�zda tutup onunlada bir de�i�keni
// akl�m�zda tutup de�erini de�i�tirelim.
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
