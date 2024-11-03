#include <iostream>
using namespace std;

int main()
{
    int l, c;
    cin >> l >> c;

    int A[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }

    int menordaLinha, colunadoMenor, linhadoMenor;

    //a primeira vari�vel representar� o candidato a ponto de cela, a segunda representar� o �ndice
    //de sua coluna, e a terceira ser� o �ndice da linha.

    bool temCela = false;

    //Pressuponha que n�o h� ponto de cela na matriz.

    for (int i = 0; i < l; i++)
    {
        menordaLinha = A[i][0];
        colunadoMenor = 0, linhadoMenor = i;

        //Pressuponha que o primeiro elemento da linha i seja o menor.
        //Logo, voc� tamb�m pressup�e que a linha desse elemento tenha �ndice i,
        //e que a coluna dele tenha �ndice 0.


        for (int j = 1; j < c; j++)
        {
            if (A[i][j] < menordaLinha)
            {
                menordaLinha = A[i][j];
                colunadoMenor = j;
            }
        }

        //O elemento que voc� achava ser o menor da linha i n�o o era, no fim das contas. Ent�o, substitua
        //a vari�vel "menordaLinha" pelo elemento que voc� acabou de encontrar.
        //Ainda, armazene o �ndice da coluna do menor elemento da linha i em uma vari�vel, que ser� chamada
        //de "colunadoMenor".

        int k;

        //A vari�vel k foi criada fora do la�o "for" para que ela seja usada depois que o la�o
        //for finalizado.

        for (k = 0; k < l; k++)
        {

            if (k == linhadoMenor)
            {
                continue;
            }

            //Quando a vari�vel k, que varre todos as linhas da matriz, assumir o valor da linha do candidato
            //a ponto de cela, force a pr�xima itera��o do la�o, pulando o c�digo intermedi�rio.
            //Lembre-se de que o candidato a ponto de Cela � representado pela vari�vel "menordaLinha".
            //Se n�o houvesse esse continue, haveria uma compara��o de "menordaLinha" com ele pr�prio!

            if (menordaLinha <= A[k][colunadoMenor])
            {
                break;
            }

            //Se o poss�vel candidato a ponto de Cela n�o for um ponto de cela, interrompa o la�o "for" da vari�vel k
            //e incremente o la�o de repeti��o de i.

        }

            if (k == l)
            {
                temCela = true;
                break;
            }

            //Se a vari�vel k foi incrementada at� l, significa que o la�o "for" desta vari�vel
            //n�o sofreu nenhum break. Portanto, � porque o candidato a ponto de cela era
            //um ponto de cela no fim das contas.
    }



    if (temCela == true)
    {
        cout << "Ponto de Cela: A" << "[" << linhadoMenor << "]" << "["
        << colunadoMenor << "]" << "=" << menordaLinha;
    }

    else
    {
        cout << "Nao ha ponto de cela";
    }

    return 0;
}
