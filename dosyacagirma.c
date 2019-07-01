// DOSYA ÇAĞIRMA
// Kaynak programa bir veya birden fazla dosya çağrılabilir.
// Çağrılacak dosya standart C kütüphanesinden olabilir.
// Standart C kütüphaneleri < .. > şeklinde çağrılır.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Kullanıcı tarafından oluşturulan kütüphaneler ise;
#include "mutlakdeger.h"
#include "belirtec.h"
// şeklinde çağrılabilir. Burada " .. " şeklinde header(başlık) dosyalarımızı
// kendi yazdığımız C programına dahil edebiliriz.