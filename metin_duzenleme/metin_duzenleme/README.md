# Metin D�zenleyici

Bu proje, basit bir metin d�zenleyicisi geli�tirmeyi ama�lar. Kullan�c�, �e�itli komutlar kullanarak metin �zerinde i�lem yapabilir. Bu d�zenleyici, ekleme, silme, geri alma ve metni dosyaya kaydetme gibi temel i�lemleri destekler.

## �zellikler

- **Metin Ekleme:** Kullan�c� taraf�ndan girilen bir karakter dizisi mevcut metnin sonuna eklenir.
- **Karakter Silme:** Kullan�c� taraf�ndan belirtilen say�da karakter, metnin sonundan silinir.
- **Metin Yazd�rma:** Metnin belirtilen say�da karakteri ekrana yazd�r�l�r.
- **Geri Alma:** En son yap�lan i�lem geri al�n�r.
- **Dosyaya Kaydetme:** Mevcut metin, belirtilen bir dosyaya kaydedilir.

## Komutlar

A�a��da kullan�c� taraf�ndan kullan�labilen komutlar ve a��klamalar� verilmi�tir:

1. **append(s):** Kullan�c� taraf�ndan girilen `s` karakter dizisini metnin sonuna ekler.
2. **delete(k):** Metnin sonundan ba�layarak `k` adet karakteri siler.
3. **print(k):** Metnin ilk `k` karakterini ekrana yazd�r�r.
4. **undo():** Son yap�lan i�lemi geri al�r.
5. **save(filename):** Mevcut metni belirtilen `filename` isimli dosyaya kaydeder ve program� sonland�r�r.

## Kullan�m

1. **Projeyi Derleme:**

   ```bash
   g++ -o metin_duzenleyici main.cpp
