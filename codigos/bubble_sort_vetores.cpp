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
                troca_numeros(V[j], V[j+1]);
            }
        }

    }

    for (int k = 0; k < n; k++)
    {
        cout << V[k] << " ";

    }



    return 0;
}
