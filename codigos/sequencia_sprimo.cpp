#include <iostream>
using namespace std;
bool ehPrimo(int n);
bool ehSPrimo(int n1, int n2);

bool ehPrimo(int n)
{
    bool p;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {

    if (n % i == 0)
    { j++; }

    }
    if (j == 2)
    { p = true; }
    else { p = false; }


    return p;
}


bool ehSPrimo(int n1, int n2)
{
    bool p;
    int soma = 0;

    for (int i = n1; i <= n2; i++)
    {
        if (ehPrimo(i) == true)
            soma = soma + i;
    }

    if (ehPrimo(soma) == true)
        p = true;
    else
        p = false;

    return p;
}


int main()
{
    int n1, n2;
    bool p;
    cin >> n1 >> n2;

    p = ehSPrimo(n1, n2);
    if (p == true)
        cout << "SPRIMO";
    else
        cout << "NAO SPRIMO";

    return 0;
}
