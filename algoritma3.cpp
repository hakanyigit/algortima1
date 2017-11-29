#include <stdio.h>
#include <conio.h>

int main(){
	
	int sayi1,sayi2,toplam,fark,carpim;
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);

	
	toplam=sayi1+sayi2;
	printf("Toplam: %d\n",toplam);
	
	fark=sayi1/sayi2;
	printf("Fark: %d\n",fark);
	
	carpim=sayi1*sayi2;
	printf("Carpim: %d",carpim);
	
}
