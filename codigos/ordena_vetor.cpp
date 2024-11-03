#include <iostream>
using namespace std;
void troca_numero(int &a, int &b);

void troca_numero(int &a, int &b)
{
int aux;
aux = a;
a = b;
b = aux;
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

    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (V[j] > V[j+1])
            {
                troca_numero(V[j], V[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << V[i] << " ";
    }
    return 0;
}
