#include <iostream>
using namespace std;

// Próbowałem stworzyć tablicę w której to użytkownik podaje jej rozmiar poprzez int a; cin >> a; int tab[a];
// jadnak przy takim kodzie wyskakiwał mi błąd że przy inicjacji programu waartość rozmiaru tablicy musi być wartością
// stałą i za nic nie byłem w stanie to obejść

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
