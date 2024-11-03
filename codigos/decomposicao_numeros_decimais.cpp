#include <iostream>
using namespace std;
void decomposicao(double n, int& i, double& d);

void decomposicao(double n, int& i, double& d)
{
    i = (int) n;
    d = n - i;

}

int main()
{
    int parte_inteira;
    double v, parte_decimal;
    cin >> v;

    decomposicao(v,parte_inteira, parte_decimal);

    cout << parte_inteira << endl;
    cout << parte_decimal << endl;

    return 0;
}
