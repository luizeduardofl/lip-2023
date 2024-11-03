#include <iostream>
using namespace std;

void troca_numeros(int &a, int &b);

void troca_numeros(int &a, int &b)
{
int troca;
troca = a;
a = b;
b = troca;
}

void bubble_sort(int V[], int n);

void bubble_sort(int V[], int n)
{

    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (V[j] > V[j+1])
            {
                troca_numeros(V[j], V[j+1]);
            }
        }

    }

}
int main()
{
    int n1, n2, i, j, k;
    cin >> n1;
    int C1[n1];

    for (i = 0; i < n1; i++)
    {
        cin >> C1[i];
    }

    cin >> n2;
    int C2[n2];

    for (j = 0; j < n2; j++)
    {
        cin >> C2[j];
    }

    int n3 = n1 + n2, C3[n3];

    for (i = 0, j = 0; i < n1 && j < n2; i++, j++)
    {
        C3[i] = C1[j];
    }

    for (j = n1, k = 0; j < n3 && k < n2; j++, k++)
    {
        C3[j] = C2[k];
    }

    bubble_sort(C3, n3);

    bool ehRepetido;

    for (i = 0; i < n3; i++)
    {
        ehRepetido = false;

        for (j = 0; j < i; j++)
        {
            if (C3[i] == C3[j])
            {
                ehRepetido = true;
                break;
            }
        }

        if (ehRepetido == false)
        {
            cout << C3[i] << " ";
        }

    }

    return 0;
}
