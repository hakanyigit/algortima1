#include <stdio.h>
#include <conio.h>

main()
{
	char ad[10],soyad[10],yas[2],sehir[13],meslek[10];
	printf("Adiniz: ");
	scanf("%s",ad);
	
	printf("Soyadiniz: ");
	scanf("%s",soyad);
	
	printf ("Yasiniz: ");
	scanf("%s",yas);
	
	printf("Sehriniz: ");
	scanf("%s",sehir);
	
	printf("Mesleginiz: ");
	scanf("%s",meslek);
	
	printf("\n");
	
	printf("Adi: %s - Soyadi: %s\n",ad,soyad);
	printf("Yasi: %s\n",yas);
	printf("Sehir: %s - Meslek %s",sehir,meslek);
}
