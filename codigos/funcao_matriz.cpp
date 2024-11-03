#include <iostream>
using namespace std;
const int MAX = 12;

void preencherMatriz(int M[][MAX], int &l, int &c);
void imprimirMatriz(int M[][MAX], int &l, int &c);

void preencherMatriz(int M[][MAX], int &l, int &c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                M[i][j] = 0;
            }

            else
            {
                M[i][j] = 1;
            }
        }
    }
    return;
}

void imprimirMatriz(int M[][MAX], int &l, int &c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << M[i][j] << " ";
        }

        cout << endl;
    }
    return;
}

int main()
{
    int l, c;
    cin >> l >> c;

    int M[MAX][MAX];

    preencherMatriz(M, l, c);
    imprimirMatriz(M, l, c);

    return 0;
}
