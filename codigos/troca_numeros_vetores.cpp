#include <iostream>
using namespace std;
int main ()
{
    int V[16];

    for (int i = 0; i < 16; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 15; j >= 8; j--)
        {
            int aux;
            aux = V[i];
            V[i] = V[j];
            V[j] = aux;
        }
    }

    for (int k = 0; k < 16; k++)
    {
        cout << V[k] << " ";
    }

    return 0;
}
