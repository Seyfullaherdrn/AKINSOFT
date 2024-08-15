# Metin Düzenleyici

Bu proje, basit bir metin düzenleyicisi geliştirmeyi amaçlar. Kullanıcı, çeşitli komutlar kullanarak metin üzerinde işlem yapabilir. Bu düzenleyici, ekleme, silme, geri alma ve metni dosyaya kaydetme gibi temel işlemleri destekler.

## Özellikler

- **Metin Ekleme:** Kullanıcı tarafından girilen bir karakter dizisi mevcut metnin sonuna eklenir.
- **Karakter Silme:** Kullanıcı tarafından belirtilen sayıda karakter, metnin sonundan silinir.
- **Metin Yazdırma:** Metnin belirtilen sayıda karakteri ekrana yazdırılır.
- **Geri Alma:** En son yapılan işlem geri alınır.
- **Dosyaya Kaydetme:** Mevcut metin, belirtilen bir dosyaya kaydedilir.

## Komutlar

Aşağıda kullanıcı tarafından kullanılabilen komutlar ve açıklamaları verilmiştir:

1. **append(s):** Kullanıcı tarafından girilen `s` karakter dizisini metnin sonuna ekler.
2. **delete(k):** Metnin sonundan başlayarak `k` adet karakteri siler.
3. **print(k):** Metnin ilk `k` karakterini ekrana yazdırır.
4. **undo():** Son yapılan işlemi geri alır.
5. **save(filename):** Mevcut metni belirtilen `filename` isimli dosyaya kaydeder ve programı sonlandırır.

