#include <iostream>
using namespace std;

struct Horario
{
    int hora;
    int minuto;
    int segundo;
};

struct Carro
{
    char placa[8];
    Horario entrada;
    Horario saida;
};

void lerString (char s[], int n)
{
    while (cin.peek() == '\n')
    {
        cin.ignore();
    }
    cin.getline(s, n);
    return;
}

int HorarioparaSegundos(Horario h)
{
    int segundos = h.hora * 3600 + h.minuto * 60 + h.segundo;
    return segundos;
}

int permanencia(Carro c1)
{
    int p;
    p = HorarioparaSegundos(c1.saida) - HorarioparaSegundos(c1.entrada);
    return p;
}

Horario SegundosparaHorario(int segundo)
{
    Horario h;
    h.hora = segundo / 3600;
    h.minuto = (segundo % 3600) / 60;
    h.segundo = (segundo % 3600) % 60;
    return h;
}

int main()
{
    int n;
    cin >> n;

    Carro BancodeDados[n];

    for (int i = 0; i < n; i++)
    {
        lerString(BancodeDados[i].placa, 8);

        cin >> BancodeDados[i].entrada.hora;
        cin >> BancodeDados[i].entrada.minuto;
        cin >> BancodeDados[i].entrada.segundo;

        cin >> BancodeDados[i].saida.hora;
        cin >> BancodeDados[i].saida.minuto;
        cin >> BancodeDados[i].saida.segundo;
    }

    int maior = 0;

    for (int i = 0; i < n; i++)
    {
        if (permanencia(BancodeDados[i]) > permanencia(BancodeDados[maior]))
        {
            maior = i;
        }
    }

    cout << BancodeDados[maior].placa << endl;

    Horario h = SegundosparaHorario(permanencia(BancodeDados[maior]));

    cout << h.hora << ":" << h.minuto << ":" << h.segundo;

    return 0;
}
