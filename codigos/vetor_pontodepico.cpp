#include <iostream>
using namespace std;

void picos (int V[], int &n);
void troca(int &a, int &b);

void troca (int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;

    return;
}


bool temPico = false;

void picos(int V[], int &n)
{
    int quantV = 0;

    for (int i = 1; i < n-1; i++)
    {
        if (V[i] > V[i-1] && V[i] > V[i+1])
        {
            troca(V[i], V[quantV]);
            quantV++;
            temPico = true;
        }
    }

    n = quantV;

    return;
}

int main()
{
    int n;
    cin >> n;

    int V[n];

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    picos(V, n);


    if (temPico == true)
    {
        for (int i = 0; i < n; i++)
        {
            cout << V[i] << " ";
        }
    }

    else
    {
        cout << "Sem pontos de pico";
    }

    return 0;
}

