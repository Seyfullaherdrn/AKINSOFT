#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// Metindeki boşlukları silen ve yeni metni döndüren fonksiyon
string removeSpaces(const string& input) {
    string result;
    for (char ch : input) {
        if (ch != ' ') {
            result += ch;
        }
    }
    return result;
}

// Metni satırlara ayırıp ekrana matris olarak yazdıran fonksiyon
void printMatrix(const string& text, int m, int n) {
    int index = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (index < text.length()) {
                cout << text[index];
                index++;
            }
            else {
                cout << ' '; // Metin kısa kalırsa boşluk doldur
            }
        }
        cout << endl;
    }
}

int main() {
    // Dosya yolunu belirleyin
    string filePath = "C:\\Users\\seyfullah.erduran\\source\\repos\\metin_sifreleme\\metin.txt";

    // Dosyayı açmaya çalışın
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "Dosya acilamadi! Dogru dosya yolunu belirttiginizden emin olun." << endl;
        return 1;
    }

    // Dosyanın tamamını okuyun ve UTF-8 BOM'u kontrol edin
    string inputText;
    getline(file, inputText, '\0');
    file.close();

    // UTF-8 BOM varsa kaldırın
    if (inputText.size() >= 3 && (unsigned char)inputText[0] == 0xEF && (unsigned char)inputText[1] == 0xBB && (unsigned char)inputText[2] == 0xBF) {
        inputText.erase(0, 3);
    }

    // Boşlukları sil ve yeni metni oluştur
    string processedText = removeSpaces(inputText);

    // Metin uzunluğu
    int l = processedText.length();

    // Matris boyutlarını hesapla
    int m = floor(sqrt(l));
    int n = ceil(sqrt(l));

    // Eğer m * n metin uzunluğunu karşılamazsa m'i artır
    if (m * n < l) {
        m = n;
    }

    // Sonucu yazdır
    cout << "m: " << m << ", n: " << n << endl;
    printMatrix(processedText, m, n);

    return 0;
}
