#include <stdio.h>
// kullan�c�n�n belirledi�i ad�m say�s�na kadar fibonacci serisini yazd�r�n.
main(){
	int onceki=0,kendisi=1,gecici,adimSayisi,i;
	
	printf("Kac adim yazdirilsin : ");
	scanf("%d",&adimSayisi);
	
	printf("%d ",onceki);
	printf("%d ",kendisi);
	
	for(i=0;i<adimSayisi-1;i++){
		printf("%d ",onceki+kendisi);
		
		gecici=onceki;
		onceki=kendisi;
		kendisi=gecici+onceki;
		
		
	}
	
}
