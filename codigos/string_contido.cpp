#include <iostream>
#include <cstring>
using namespace std;

void lerString(char s[], int n);
int localizar (char s1[], char s2[]);

const int MAX = 60;

void lerString(char s[], int n)
{
    while (cin.peek() == '\n')
    {
        cin.ignore();
    }

    cin.getline(s, n);
}

int main()
{
    char s1[MAX], s2[MAX];
    lerString(s1, MAX);
    lerString(s2, MAX);

    int posicao = localizar(s1, s2);

    if (posicao != -1)
    {
        cout << "S1 contem S2 na posicao " << posicao;
    }

    else
    {
        cout << "S1 NAO contem S2";
    }

    return 0;
}

int localizar (char s1[], char s2[])
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int posicao, k;
    bool contido = false;

    for(int i = 0; i < n2; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            if (s2[i] == s1[j])
            {
                for (k = i; k < n2 && j+k < n1; k++)
                {
                    if (s2[k] != s1[j+k])
                    {
                        break;
                    }
                }

                if (k == n2)
                {
                    contido = true;
                    posicao = j;
                }
            }
        }
    }

    if (contido == true)
    {
        return posicao;
    }

    else
    {
        return -1;
    }
}
