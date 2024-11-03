//O algoritmo de Euclides para encontrar o MDC de dois números inteiros positivos.
#include <iostream>
using namespace std;

int main()
{
    unsigned int m, n;
    cout << "Digite dois numeros inteiros positivos: ";
    cin >> m >> n;

    unsigned int aux;

    if (m < n)
    {
        aux = m;
        m = n;
        n = aux;
    }

    unsigned int r = m % n;

    while (r != 0)
    {
        m = n;
        n = r;

        r = m % n;
    }

    cout << "Valor do MDC dos dois numeros: " << n;

    return 0;
}

