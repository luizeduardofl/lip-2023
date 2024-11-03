#include <iostream>
using namespace std;
const int MAX = 12;

int somaDiagonalSecundaria(int M[][MAX], int &n);

int somaDiagonalSecundaria(int M[][MAX], int &n)
{
    int somatorio = 0;

    for (int i = 0, j = n-1; i < n && j >= 0; i++, j--)
    {
        somatorio = somatorio + M[i][j];
    }

    return somatorio;
}

int main()
{
    int n;
    cin >> n;

    int M[MAX][MAX];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M[i][j];
        }
    }

    cout << somaDiagonalSecundaria(M, n);

    return 0;
}
