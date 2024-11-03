#include <iostream>
using namespace std;

struct Vetor
{
    double x, y, z;
};

void preencher(Vetor &v1)
{
    cin >> v1.x;
    cin >> v1.y;
    cin >> v1.z;

    return;
}

Vetor soma (Vetor v1, Vetor v2)
{
    Vetor aux;
    aux.x, aux.y, aux.z = 0;
    aux.x = v1.x + v2.x;
    aux.y = v1.y + v2.y;
    aux.z = v1.z + v2.z;

    return aux;
}



int main()
{
    Vetor v1, v2;
    preencher(v1);
    preencher(v2);

    Vetor v3 = soma(v1, v2);

    cout << v3.x << " " << v3.y << " " << v3.z;

    return 0;
}
