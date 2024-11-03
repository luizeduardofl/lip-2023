#include <iostream>
using namespace std;
const int MAX = 16;

void multiplicarMatrizes(int M1[][MAX], int M2[][MAX], int M3[][MAX], int &n);

void multiplicarMatrizes(int M1[][MAX], int M2[][MAX], int M3[][MAX], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int soma = 0;

            for (int k = 0; k < n; k++)
            {
                M3[i][j] = M1[i][k] * M2[k][j] + soma;
                soma = M3[i][j];
            }
        }
    }

    return;
}

int main()
{
    int n;
    cin >> n;

    int M1[MAX][MAX], M2[MAX][MAX], M3[MAX][MAX];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M1[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M2[i][j];
        }
    }

    multiplicarMatrizes(M1, M2, M3, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << M3[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

