#include <stdio.h>  // #include �ni�lemcisiyle <stdio.h> ba�l�k dosyas� y�klendi.

#define UZUNLUK 100 // #define ile UZUNLUK ad�nda bir makro tan�mland� ve de�eri verildi. Dikkat edin ';'(noktal� virg�l) ile bitirmedik.
#define PI 3.14159 // PI say�s�n� tan�mlad�k.
#define HARF 'A' // Karakter tan�m� yapt���m�z i�in 'tek t�rnak' kullan�yoruz.
#define SIRALIHARF "ABC"  // String bir ifade tan�m� yapt���m�z i�in "�ift t�rnak" kullan�yoruz.

int main() {

	printf("Uzunluk degeri : %d \n", UZUNLUK);  // \n i�areti bir ka���(escape) karakterdir ve imleci alt sat�ra ge�irmek i�in kullan�l�r.
											    // %d i�areti belirlenen tamsay�lar� yazd�rmak i�in kullan�r�z.
	printf("Pi degeri : %f \n", PI);            // PI de�eri ondal�kl� (float) bir ifadedir.O y�zden yazd�rmak i�in %f kullan�ld�.
	printf("Harf degeri : %c \n", HARF);		// Harf yazd�rmak i�in %c belirteci kullan�l�r.
	printf("Sirali harf : %s \n", SIRALIHARF);  // Asl�nda string bir ifade yazd�r�yoruz ve bu konuya ileri de de�inece�iz.
	return 0;									// Fakat �imdilik string ifadeyi yazd�rmak i�in %s ifadesini kulland���m�z� bilmemiz yeterli.
}