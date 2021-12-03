#include <iostream>

using namespace std;
int main()
{
    int liczba, L, W, maxL, maxW;
    int tab[10];

    
    cout << "wprowadz 10 liczb" << endl;

    for (int i = 0;i <= 9;i++) {
        cin >> liczba;
        tab[i] = liczba;
    }

    cout << endl;
    maxL = 0;
    for (int i = 0; i < 9; i++)
    {
        W = tab[i]; L = 0;
        for (int j = 0; j < 9; j++) if (tab[j] == W) L++;
        if (L > maxL)
        {
            maxL = L; maxW = W;
        }
    }

    

    cout << endl <<"Najczesciej wystepujaca wartoscia jest: " << maxW << " i wystepuje " << maxL << " razy" << endl << endl;
    return 0;
}

