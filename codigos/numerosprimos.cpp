#include <iostream>
using namespace std;

int main() {
    int n, i, j = 0;
    cin >> n;
    for (i = 1; i <= n; i++){
        if (n % i == 0) {
            j++;
        }
    }
        if (j == 2) {
            cout << "PRIMO" << endl;
        }
        else {
            cout << "NAO PRIMO" << endl;
        }

    return 0;
}
