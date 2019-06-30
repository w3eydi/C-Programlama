#include <stdio.h> // Giriþ - Çýkýþ fonksiyon kütüphanesi yüklendi.
#include <locele.h> // Türkçe karakter sorununu çözen unicode kütüphane yüklendi.

int main() {
	setlocale(LC_ALL, ""); // Türkçe karakter sorunu çözen kod parçasý main(){ .. } bloðu içerisine yerleþtirildi.
	char ch; // Karakter tipli ch adýnda bir deðiþken oluþturuldu.
	printf("Bir tuþa basýnýz : "); // Çýkýþ birimiyle ekrana yazý yazdýrýyoruz.
	ch = getchar(); // Ekrandan giriþ birimiyle tuþun hafýzaya kaydedilmesi gerçekleþtiriliyor.
	printf("\nGirdiðiniz karakter %c 'dir.\n", ch); // Girilen karakter tekrar çýkýþ fonksiyonuyla ekrana yazdýrýlýr.

	return 0; // Derleyiciye herhangi bir hata olmadýðýnýn mesajý verildi.
}