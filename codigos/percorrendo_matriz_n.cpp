#include <iostream>
using namespace std;

int main()
{
    int n, soma_principal = 0, soma_secundaria = 0;
    int soma_acima_principal = 0, soma_abaixo_principal = 0;
    int soma_coluna_par = 0, soma_linha_impar = 0;

    cin >> n;
    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0, j = 0; i < n && j < n; i++, j++)
    {
        soma_principal += A[i][j];
    }

    for (int i = 0, j = n-1; i < n && j >= 0; i++, j--)
    {
        soma_secundaria += A[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i < j)
            {
                soma_acima_principal += A[i][j];
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                soma_abaixo_principal += A[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                soma_coluna_par += A[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 != 0)
            {
                soma_linha_impar += A[i][j];
            }
        }
    }




    cout << "Soma Diagonal Principal: " << soma_principal << endl;
    cout << "Soma Diagonal Secundaria: " << soma_secundaria << endl;
    cout << "Soma Acima Diagonal Principal: " << soma_acima_principal << endl;
    cout << "Soma Abaixo Diagonal Principal: " << soma_abaixo_principal << endl;
    cout << "Soma Colunas Pares: " << soma_coluna_par << endl;
    cout << "Soma Linhas Impares: " << soma_linha_impar << endl;

    return 0;
}
