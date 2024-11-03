#include <iostream>
using namespace std;

int main() {
    int n, r, a, i;
    long long int fatorial_n = 1, fatorial_r = 1, fatorial_a = 1, nCR;
    cin >> n >> r;
    a = n - r;

    for (i = 1; i <= n; i++) {
        fatorial_n = fatorial_n * i;
    }

    for (i = 1; i <= r; i++) {
        fatorial_r = fatorial_r * i;
    }

    for (i = 1; i <= a; i++) {
        fatorial_a = fatorial_a * i;
    }

    cout << fatorial_n / (fatorial_r * fatorial_a) << endl;

    return 0;
}
