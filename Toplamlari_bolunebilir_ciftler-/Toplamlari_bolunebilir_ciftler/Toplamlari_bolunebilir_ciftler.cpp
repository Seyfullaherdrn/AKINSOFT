//Seyfullah ERDURAN   08/08/2024

#include <iostream>
#include <vector>
#include <cstdlib>  // std::rand ve std::srand için gerekli
#include <ctime>    // std::time için gerekli

using namespace std;

// Rastgele sayı üreten fonksiyon
int generateRandomNumber() {
    return rand() % 2001 - 1000; // -1000 ile 1000 arasında rastgele sayı üretir
}

// Çiftleri bulan fonksiyon
vector<pair<int, int>> findPairs(const vector<int>& arr, int k) {
    vector<pair<int, int>> pairs; // Uygun çiftleri tutmak için bir vektör
    int n = arr.size(); // Dizinin uzunluğunu al

    // Tüm eleman çiftlerini kontrol et
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Eğer elemanların toplamı k'ya tam bölünüyorsa
            if ((arr[i] + arr[j]) % k == 0) {
                pairs.push_back(make_pair(i, j)); // Çifti sonuç listesine ekle
            }
        }
    }

    return pairs; // Bulunan çiftleri geri döndür
}

int main() {
    srand(time(0)); // Rastgele sayı üretici için seed

    int n, k;
    cout << "Dizinin uzunlugunu girin (n): ";
    cin >> n;
    cout << "Pozitif tam bolunecek sayiyi girin (k): ";
    cin >> k;

    vector<int> arr(n); // Dizi oluştur
    for (int i = 0; i < n; ++i) {
        arr[i] = generateRandomNumber(); // Diziyi rastgele sayılarla doldur
    }

    // Diziyi ekrana yazdır
    cout << "Rastgele uretilen dizi: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Uygun çiftleri bul
    vector<pair<int, int>> pairs = findPairs(arr, k);

    // Eğer uygun çiftler varsa ekrana yazdır
    if (!pairs.empty()) {
        cout << "i < j ve toplam k'ya tam bolunen ciftlerin indisleri: " << endl;
        for (const auto& p : pairs) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
    }
    else {
        cout << "Bu kurala uygun cift yok." << endl;
    }

    return 0;
}
