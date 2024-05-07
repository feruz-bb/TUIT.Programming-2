// deadline_bf.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <set>

using namespace std;

int main() {
    // Berilgan float turidagi to’plam qiymatlar
    multiset<float> toplam1 = { 1.25, 2.5, 3.75 };
    multiset<float> toplam2 = { 4.25, 5.5, 6.75 };

    // Butun va o'nlik qismlarni ajratish
    set<int> butun_qismi;
    multiset<float> kasr_qismi;

    for (auto it = toplam1.begin(); it != toplam1.end(); ++it) {
        float number = *it;
        int butun_qism = static_cast<int>(number); // Butun qism
        float kasr_qism = number - butun_qism;     // Kasr qism

        // Qiymatlarni joylash
        butun_qismi.insert(butun_qism);
        kasr_qismi.insert(kasr_qism);
    }

    // Berilgan float sonlarni chiqarish
    cout << "Berilgan float sonlar:" << endl;
    for (auto it = toplam1.begin(); it != toplam1.end(); ++it)
        cout << *it << " ";
    cout << endl;
    // Natijalarni chiqarish
    auto it1 = butun_qismi.begin();
    auto it2 = kasr_qismi.begin();
    while (it1 != butun_qismi.end() && it2 != kasr_qismi.end()) {
        cout << "Butun qismi: " << *it1 << ", Kasr qismi: " << *it2 << endl;
        ++it1;
        ++it2;
    }

    return 0;
}
