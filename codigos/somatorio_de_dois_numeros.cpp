#include <iostream>
using namespace std;
int somatorio(int n1, int n2);

int somatorio(int n1, int n2)
{
    int soma = 0;
    for (int i = n1; i <= n2; i++)
        soma += i;

    return soma;
}


int main()
{
    int x, y;
    cin >> x >> y;

    cout << somatorio(x,y) << endl;

    return 0;
}
