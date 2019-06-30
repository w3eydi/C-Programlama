## C 'de Türkçe Karakterler yazdırmak!

Hemen hemen hepimiz bu sorunu yaşamışızdır.

C dilinde Türkçe karakter yazdıktan sonra **printf()** fonksiyonu ile ekrana yazdırmaya çalıştığımızda ekranda garip simgeler görmekteyiz.

Bu sorunu 

```
#include <locale.h> // Header(```**başlık**```) dosyasını kodumuza ekliyoruz.
```

**main() {  ..  }** bloğu içerisinde ise kodlar başlarken;

```
main(){
setlocale(LC_ALL, ""); // setlocale(LC_ALL, "Turkish"); şeklinde de olabilir.

...

}
```

**setlocale()** fonksiyonunu gösterilen şekillerden biriyle yükleyebiliriz.

