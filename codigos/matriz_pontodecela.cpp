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

    //a primeira variável representará o candidato a ponto de cela, a segunda representará o índice
    //de sua coluna, e a terceira será o índice da linha.

    bool temCela = false;

    //Pressuponha que não há ponto de cela na matriz.

    for (int i = 0; i < l; i++)
    {
        menordaLinha = A[i][0];
        colunadoMenor = 0, linhadoMenor = i;

        //Pressuponha que o primeiro elemento da linha i seja o menor.
        //Logo, você também pressupõe que a linha desse elemento tenha índice i,
        //e que a coluna dele tenha índice 0.


        for (int j = 1; j < c; j++)
        {
            if (A[i][j] < menordaLinha)
            {
                menordaLinha = A[i][j];
                colunadoMenor = j;
            }
        }

        //O elemento que você achava ser o menor da linha i não o era, no fim das contas. Então, substitua
        //a variável "menordaLinha" pelo elemento que você acabou de encontrar.
        //Ainda, armazene o índice da coluna do menor elemento da linha i em uma variável, que será chamada
        //de "colunadoMenor".

        int k;

        //A variável k foi criada fora do laço "for" para que ela seja usada depois que o laço
        //for finalizado.

        for (k = 0; k < l; k++)
        {

            if (k == linhadoMenor)
            {
                continue;
            }

            //Quando a variável k, que varre todos as linhas da matriz, assumir o valor da linha do candidato
            //a ponto de cela, force a próxima iteração do laço, pulando o código intermediário.
            //Lembre-se de que o candidato a ponto de Cela é representado pela variável "menordaLinha".
            //Se não houvesse esse continue, haveria uma comparação de "menordaLinha" com ele próprio!

            if (menordaLinha <= A[k][colunadoMenor])
            {
                break;
            }

            //Se o possível candidato a ponto de Cela não for um ponto de cela, interrompa o laço "for" da variável k
            //e incremente o laço de repetição de i.

        }

            if (k == l)
            {
                temCela = true;
                break;
            }

            //Se a variável k foi incrementada até l, significa que o laço "for" desta variável
            //não sofreu nenhum break. Portanto, é porque o candidato a ponto de cela era
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
