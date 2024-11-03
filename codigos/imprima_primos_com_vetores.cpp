#include <iostream>
using namespace std;
bool ehPrimo(int a);

bool ehPrimo(int a)
{
    bool p;
    int j = 0;
    for (int i = 1; i <= a; i++)
    {

    if (a % i == 0)
    { j++; }

    }
    if (j == 2)
    { p = true; }
    else { p = false; }


    return p;
}
int main()
{
    int n, cont = 0, i = 0;
    cin >> n;
    int V[n];

    while (i < n)
    {
        for (int j = 2; cont < n; j++)
        {
            if (ehPrimo(j) == true)
            {
                V[i] = j;
                cont++;
                i++;
            }

        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << V[i] << " ";
    }
    return 0;
}
