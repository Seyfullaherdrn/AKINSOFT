#include <iostream>
#include <vector>
#include <random>   // std::random_device için gerekli
#include <set>      // Ziyaret edilen noktaları takip etmek için

using namespace std;

// Rastgele bir hedef konum seçen fonksiyon
int generateRandomTarget(int current, const set<int>& visited, random_device& rd) {
    int target;
    do {
        target = rd() % 21; // 0 ile 20 arasında rastgele bir nokta seç
    } while (visited.count(target) > 0 || abs(target - current) < 5);
    return target;
}

int main() {
    random_device rd;           // Rastgele sayı üretici olarak random_device kullanımı

    vector<int> path;           // Mini Ada'nın gezinti yolu
    set<int> visited;           // Ziyaret edilen noktalar

    // Rastgele bir başlangıç noktası belirle
    int current = rd() % 21;

    // Başlangıç noktasını ziyaret edilmiş olarak işaretle
    visited.insert(current);
    path.push_back(current);

    // 10 adımlık gezinti planla
    for (int i = 0; i < 10; ++i) {
        int next = generateRandomTarget(current, visited, rd);
        visited.insert(next);
        path.push_back(next);
        current = next;
    }

    // Gezinti yolunu ekrana yazdır
    cout << "Mini Ada'nin gezinti haritasi: ";
    for (int point : path) {
        cout << point << " ";
    }
    cout << endl;

    return 0;
}
