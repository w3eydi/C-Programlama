// DOSYA ÇAÐIRMA
// Kaynak programa bir veya birden fazla dosya çaðrýlabilir.
// Çaðrýlacak dosya standart C kütüphanesinden olabilir.
// Standart C kütüphaneleri < .. > þeklinde çaðrýlýr.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Kullanýcý tarafýndan oluþturulan kütüphaneler ise;
#include "mutlakdeger.h"
#include "belirtec.h"
// þeklinde çaðrýlabilir. Burada " .. " þeklinde header(baþlýk) dosyalarýmýzý
// kendi yazdýðýmýz C programýna dahil edebiliriz.