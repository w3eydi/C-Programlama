#include <stdio.h>

#define ABS(x) ((x) < 0 ? (-x) : (x)) // Makro tan�mlamada daha sonra de�inece�imiz
// ternary operat�r kullan�lm��t�r.K�saca; if - else yap�s�n�n k�salt�lm�� versiyonudur.
// Ko�ul   ?   Do�ruysa uygulanacak olan kod   :   Yanl��sa uygulanacak olan kod

int main() {
	int a;

	printf("Lutfen bir tamsayi giriniz : ");
	scanf("%d", &a);  // Girdi i�in scanf() fonksiyonu kullan�l�r.
	printf("Girdiginiz sayinin mutlak degeri : %d \n", ABS(a));

	return 0;
}