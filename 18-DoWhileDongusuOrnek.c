#include <stdio.h>
// Kullan�c�n�n girdi�i tek say�lar� toplay�p �ift say�lar� ��karan program� yaz�n�z. program kullan�c� 0 girerse son bulsun.
main(){
	int sayi,toplam;
	
	do{
		printf("Lutfen bir sayi giriniz : ");
		scanf("%d",&sayi);
		
		if(sayi%2!=0){
			toplam+=sayi;
		}
		else{
			toplam-=sayi;
		}
		
		printf("Toplam : %d\n",toplam);
		
	}while(sayi!=0);
	
}
