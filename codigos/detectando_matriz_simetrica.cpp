#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n][n], AT[n][n];
    bool simetrica = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            AT[i][j] = A[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] != AT[i][j])
            {
                simetrica = false;
            }
        }
    }

    if (simetrica == true)
        cout << "A matriz eh simetrica";
    else
        cout << "A matriz nao eh simetrica";

    return 0;
}
