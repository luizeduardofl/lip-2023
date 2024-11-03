#include <iostream>
#include <cstring>

using namespace std;

void lerString(char s[], int n);
void criptografar(char s[]);
void desCriptografar(char s[]);

void lerString(char s[], int n)
{
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }

    cin.getline(s, n);

    return;
}



void criptografar(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
            case 'Z':
                s[i] = 'A';
                break;

            case 'z':
                s[i] = 'a';
                break;

            case ' ':
                s[i] = '#';
                break;

            default:
                s[i]++;
        }
    }

    return;
}



void desCriptografar(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
            case 'A':
                s[i] = 'Z';
                break;

            case 'a':
                s[i] = 'z';
                break;

            case '#':
                s[i] = ' ';
                break;

            default:
                s[i]--;
        }
    }

    return;
}

int main()
{
    char s[200];
    lerString(s, 200);

    criptografar(s);
    cout << "Criptografado: " << s << endl;

    desCriptografar(s);
    cout << "Descriptografado: " << s;

    return 0;
}
