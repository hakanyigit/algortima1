#include <stdio.h>
#include <conio.h>

int main(){
	
	int s1,s2,s3,ortalama;
	
	printf("Birinci Sinavi Giriniz: ");
	scanf("%d",&s1);
	printf("?kinci Sinavi Giriniz: ");
	scanf("%d",&s2);
	printf("Ucuncu Sinavi Giriniz: ");
	scanf("%d",&s3);
	
	ortalama=(s1+s2+s3)/3;
	
	printf("Ortalamaniz: %d",ortalama);
	
}
