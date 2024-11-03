#include <iostream>
using namespace std;

int f(int x)
{
    return x * x;
}

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << f(i) << endl;
    }
    return 0;
}
