#include <iostream>
#include <cstring>

using namespace std;

void lerString(char s[], int n);
void removerEspacos(char s[]);
bool palindromo (char s[]);

void lerString(char s[], int n)
{
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }

    cin.getline(s, n);

    return;
}

void removerEspacos(char s[])
{
    int cont = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[cont++] = s[i];
        }

    }

    s[cont] = '\0';

    return;
}

bool palindromo (char s[])
{
    int inicioString = 0;
    int fimString = strlen(s) - 1;

    while (inicioString < fimString)
    {
        if (s[inicioString] != s[fimString])
        {
            return false;
        }

        inicioString++;
        fimString--;
    }

    return true;
}

int main()
{
    char s[200];
    lerString(s, 200);
    removerEspacos(s);

    bool p = palindromo(s);

    if (p == true)
    {
        cout << "Eh Palindromo";
    }

    else
    {
        cout << "Nao Eh Palindromo";
    }

    return 0;
}
