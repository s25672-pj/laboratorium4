#include <iostream>

using namespace std;

int main()
{
    int tab[10][10] = {};
    // pierwsza kolumna
    for (int i = 0;i < 10;i++)
    {
        tab[i][0] = i;
    }
    // druga kolumna
    for (int i = 0;i < 10;i++)
    {
        tab[i][1] = i + i;
    }
    // trzecia kolumna
    for (int i = 0;i < 10;i++)
    {
        tab[i][2] = i * i;
    }
    // czwarta kolumna
    for (int i = 0;i < 10;i++)
    {
        tab[i][3] = i + 4;
    }
    // piąta kolumna
    for (int i = 0;i < 10;i++)
    {
        tab[i][4] = i - 5;
    }
    for (int i = 0;i < 10;i++)
    {
        for (int j = 0;j < 10;j++)
            cout << tab[i][j] << " ";

        cout << endl;
    }
    for (int i = 0;i < 10;i++)
    {
        tab[0][i] = i;
    }
    return 0;
}
