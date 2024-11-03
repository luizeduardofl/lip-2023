#include <iostream>
using namespace std;
void ord3(int& a, int& b, int& c);

void ord3(int& a, int& b, int& c)
{
    int maior;

    while (a > b || a > c || b > c)
    {
    if (a > b)
    {
        maior = a;
        a = b;
        b = maior;
    }
    if (b > c)
    {
        maior = b;
        b = c;
        c = maior;
    }
    if (a > c)
    {
        maior = a;
        a = c;
        c = maior;
    }
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    ord3(x, y, z);

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
