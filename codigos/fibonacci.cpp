#include <iostream>
using namespace std;

int main() {
    int n, primeiro = 1, segundo = 0, resultado;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << primeiro;
        if (i != n) {
            cout << ",";
        }
        resultado = primeiro + segundo;
        segundo = primeiro;
        primeiro = resultado;
    }

    return 0;
}
