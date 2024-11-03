#include <iostream>
using namespace std;
bool ehPrimo(int n);

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


int main()
{
    unsigned y, soma = 0, cont = 0;
    cin >> y;

    for (int i = 2; cont < y; i++)
    {
        if (ehPrimo(i) == true)
        {
            soma = soma + i;
            cont++;
        }
    }

    cout << soma << endl;

    return 0;
}
