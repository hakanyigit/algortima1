#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
	char *str1="Bilgisayar programi";
	char str2[50]="Bilgisayar programi";
	printf("%d",strlen(str1));
	printf("\n%d",strlen(str2));
	getch();

	char kelime[100];
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
main()
{
	char *str1="Bilgisayar programi";
	char str2[50]="Bilgisayar programi";
	printf("%d",strlen(str1));
	printf("\n%d",strlen(str2));
	getch();
	char kelime[100];
	printf("bir kelime girirniz  :");
	scanf("%s",&kelime);
	int uzunluk =0;
	uzunluk=strlen(kelime);
	printf("\n%d harf",uzunluk);
	for (int i=0; i<uzunluk; i++)
	printf("\n%c",kelime[i]);
	getch();
	char cumle[100];
	printf("bir cümle girirniz");
	gets(cumle);
	int sayac=0;
	for(int i=0; i<strlen(cumle); i++)
	if(cumle[i]=='a')
	sayac++;
	
	printf("\ngirirlen cumle %d adet a harfi vardyr",sayac);
	
	getch();
    char cumle[100];
	printf("bir cümle girirniz");
	gets(cumle);
	int sayac=0;
	for (int i=0; i<strlen(cumle); i++)
	{
		printf("%c",cumle[i]);
		if(cumle[i]==' ')
		{
			printf("\n");
			sayac++;
		}
		
	}
printf("\ngirirlen cumlede %d adet kelime vardyr",sayac+1);
	int sayi[10];
	for(int i=0; i<10; i++)
	sayi[i]=i+10;
	for(int i=0; i<10; i++)
	printf("%d . indeks eleman degeri =%d \n",i, sayi[i]);
	getch();
	srand(time(NULL));
	int dizi[15];
	 int sayac=0;
	 int toplam=0;
	 for (int i=0; i<15;i++)
	 {
	 dizi[i]=10+rand()%250;
	 for(int a=2; a<dizi[i];a++)
	 if(dizi[i]%a==0)
	 sayac++;
	 if (sayac==0)
	 {
	 	printf("%d\n",dizi[i]);
	 	toplam+=dizi[i];
	 }
	 syac=0;
}
printf("asal sayylaryn toplamy=%d",toplam);
	getch();
		srand(time(NULL));
		int dizi[5];
		for(int i=0; i<5; i++)
		{
			if(i==0)
			dizi[i]=100+rand()%900;
			else
			dizi[i]=dizi[i-1]+rand()%(1000-dizi[i-1]);
		}
		for(int i=0;i<5;i++)
		printf("%d\n",dizi[i]);
	getch();

}
