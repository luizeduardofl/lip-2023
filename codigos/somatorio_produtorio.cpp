#include <iostream>
using namespace std;

int main() {

    int a, b, x, y, prod, soma = 0;
    cin >> a >> b;

    for (x = 10; x <= a; x++) {

        prod = 1;
        for (y = 20; y <= b; y++) {
            prod *= 2 * x + y;
        }
        soma = soma + prod;
    }

    cout << soma << endl;

    return 0;
}
