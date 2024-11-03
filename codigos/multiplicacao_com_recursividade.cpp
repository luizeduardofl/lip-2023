#include <iostream>
using namespace std;

int multiplicacao(int x, int y);

int multiplicacao(int x, int y)
{
    if (y == 0)
    {
       return 0;
    }

    if (x > 0 && y < 0)
    {
        int troca;
        troca = x;
        x = y;
        y = troca;
    }

    if (x < 0 && y < 0)
    {
        x = -x;
        y = -y;
    }

    if (y > 0)
    {
        x = x + multiplicacao(x, y - 1);
    }

    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << multiplicacao(a,b);

    return 0;
}
