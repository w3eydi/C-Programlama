#include <stdio.h>

#define TAMSAYI int  // Uç bir örnekte olsa yerine koyma metodunun gösterimi.

TAMSAYI main() {
	TAMSAYI a, b;  // Tanýmlanan TAMSAYI öniþlemcisi int yerine koyuluyor.

	printf("iki tamsayi giriniz :");
	scanf("%d%d", &a, &b);  // Girdi fonksiyonu ile deðerleri klavyeden alýyoruz.
	printf("Ilk sayi = %d ve ikinci sayi = %d\n", a, b);  // Sayýlarý ekrana yazdýrýyoruz.
	getch();  // Eðer F5 tuþu ile derliyorsanýz, ekranýn kapanmasýný engelliyoruz.
			  // Ctrl + F5 için getch() fonksiyonuna Visual Studio 'da gerek kalmýyor.
	return 0;
}