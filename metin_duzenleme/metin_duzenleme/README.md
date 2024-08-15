# Metin Düzenleyici

Bu proje, basit bir metin düzenleyicisi geliþtirmeyi amaçlar. Kullanýcý, çeþitli komutlar kullanarak metin üzerinde iþlem yapabilir. Bu düzenleyici, ekleme, silme, geri alma ve metni dosyaya kaydetme gibi temel iþlemleri destekler.

## Özellikler

- **Metin Ekleme:** Kullanýcý tarafýndan girilen bir karakter dizisi mevcut metnin sonuna eklenir.
- **Karakter Silme:** Kullanýcý tarafýndan belirtilen sayýda karakter, metnin sonundan silinir.
- **Metin Yazdýrma:** Metnin belirtilen sayýda karakteri ekrana yazdýrýlýr.
- **Geri Alma:** En son yapýlan iþlem geri alýnýr.
- **Dosyaya Kaydetme:** Mevcut metin, belirtilen bir dosyaya kaydedilir.

## Komutlar

Aþaðýda kullanýcý tarafýndan kullanýlabilen komutlar ve açýklamalarý verilmiþtir:

1. **append(s):** Kullanýcý tarafýndan girilen `s` karakter dizisini metnin sonuna ekler.
2. **delete(k):** Metnin sonundan baþlayarak `k` adet karakteri siler.
3. **print(k):** Metnin ilk `k` karakterini ekrana yazdýrýr.
4. **undo():** Son yapýlan iþlemi geri alýr.
5. **save(filename):** Mevcut metni belirtilen `filename` isimli dosyaya kaydeder ve programý sonlandýrýr.

## Kullaným

1. **Projeyi Derleme:**

   ```bash
   g++ -o metin_duzenleyici main.cpp
