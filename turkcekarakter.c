#include <stdio.h> // Giri� - ��k�� fonksiyon k�t�phanesi y�klendi.
#include <locele.h> // T�rk�e karakter sorununu ��zen unicode k�t�phane y�klendi.

int main() {
	setlocale(LC_ALL, ""); // T�rk�e karakter sorunu ��zen kod par�as� main(){ .. } blo�u i�erisine yerle�tirildi.
	char ch; // Karakter tipli ch ad�nda bir de�i�ken olu�turuldu.
	printf("Bir tu�a bas�n�z : "); // ��k�� birimiyle ekrana yaz� yazd�r�yoruz.
	ch = getchar(); // Ekrandan giri� birimiyle tu�un haf�zaya kaydedilmesi ger�ekle�tiriliyor.
	printf("\nGirdi�iniz karakter %c 'dir.\n", ch); // Girilen karakter tekrar ��k�� fonksiyonuyla ekrana yazd�r�l�r.

	return 0; // Derleyiciye herhangi bir hata olmad���n�n mesaj� verildi.
}