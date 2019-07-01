#include <stdio.h>  // #include öniþlemcisiyle <stdio.h> baþlýk dosyasý yüklendi.

#define UZUNLUK 100 // #define ile UZUNLUK adýnda bir makro tanýmlandý ve deðeri verildi. Dikkat edin ';'(noktalý virgül) ile bitirmedik.
#define PI 3.14159 // PI sayýsýný tanýmladýk.
#define HARF 'A' // Karakter tanýmý yaptýðýmýz için 'tek týrnak' kullanýyoruz.
#define SIRALIHARF "ABC"  // String bir ifade tanýmý yaptýðýmýz için "çift týrnak" kullanýyoruz.

int main() {

	printf("Uzunluk degeri : %d \n", UZUNLUK);  // \n iþareti bir kaçýþ(escape) karakterdir ve imleci alt satýra geçirmek için kullanýlýr.
											    // %d iþareti belirlenen tamsayýlarý yazdýrmak için kullanýrýz.
	printf("Pi degeri : %f \n", PI);            // PI deðeri ondalýklý (float) bir ifadedir.O yüzden yazdýrmak için %f kullanýldý.
	printf("Harf degeri : %c \n", HARF);		// Harf yazdýrmak için %c belirteci kullanýlýr.
	printf("Sirali harf : %s \n", SIRALIHARF);  // Aslýnda string bir ifade yazdýrýyoruz ve bu konuya ileri de deðineceðiz.
	return 0;									// Fakat þimdilik string ifadeyi yazdýrmak için %s ifadesini kullandýðýmýzý bilmemiz yeterli.
}