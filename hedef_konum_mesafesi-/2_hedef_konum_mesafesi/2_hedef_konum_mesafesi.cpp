#include <iostream>
#include <vector>
#include <random>   
#include <set>      

using namespace std;


int generateRandomTarget(int current, const set<int>& visited, random_device& rd) {
    int target;
    do {
        target = rd() % 21; 
    } while (visited.count(target) > 0 || abs(target - current) < 5);
    return target;
}

int main() {
    random_device rd;           

    vector<int> path;           
    set<int> visited;           

    
    int current = rd() % 21;

   
    visited.insert(current);
    path.push_back(current);

    
    for (int i = 0; i < 10; ++i) {
        int next = generateRandomTarget(current, visited, rd);
        visited.insert(next);
        path.push_back(next);
        current = next;
    }

    
    cout << "Mini Ada'nin gezinti haritasi: ";
    for (int point : path) {
        cout << point << " ";
    }
    cout << endl;

    return 0;
}
