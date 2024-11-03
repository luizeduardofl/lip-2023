#include <iostream>
#include <cstring>

using namespace std;

void lerString(char s[], int n);

void lerString(char s[], int n)
{
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }

    cin.getline(s, n);

    return;
}

int main()
{
    int n;
    cin >> n;

    char C[n][50];

    for (int i = 0; i < n; i++)
    {
        lerString(C[i], 50);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            char aux[50];
            int p = strcmp(C[i], C[j]);

            if (p > 0)
            {
                strcpy(aux, C[i]);
                strcpy(C[i], C[j]);
                strcpy(C[j], aux);
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << C[i] << endl;
    }

    return 0;
}
