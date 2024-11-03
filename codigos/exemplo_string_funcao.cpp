//Exemplo utilizando a função strpcy para criar uma função que troca valores de dois strings entre si.
#include <iostream>
#include <cstring>
using namespace std;

void trocaString(char a[], char b[]);

void trocaString(char a[], char b[], int n)
{
    char aux[n];
    strcpy(aux, b);
    strcpy(b, a);
    strcpy(a, aux);

    return;
}

int main()
{
    char alfa[50] = "Esse texto deveria estar invertido.";
    char beto[50] = "Se estiver, o programa funcionou.";

    trocaString(alfa, beto, 50);

    cout << alfa << endl;
    cout << beto << endl;


    return 0;
}
