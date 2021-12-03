#include <iostream>
using namespace std;

int liczba, maks;

int main() {
    int tab[10];

    
    cout << "wprowadz 10 liczb" << endl;

    for (int i = 0;i <= 9;i++) {
        cin >> liczba;
        tab[i] = liczba;
    }
    for(int i = 0;i <= 9;i++) {
        if (tab[i] > maks) {
            maks = tab[i];
        }
    }
    cout << "Najwyzsza wartosc z podanych to: " << maks << endl;
    return 0;
}
