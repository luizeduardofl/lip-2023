#include <iostream>
using namespace std;
int main()
{
int aposta[6];
int sorteio[6];
int cont = 0;

for (int i = 0; i < 6; i++)
{
	cin >> aposta[i];
}

for (int j = 0; j < 6; j++)
{
	cin >> sorteio[j];
}

for (int i = 0; i < 6; i++)
{
	for (int j = 0; j < 6; j++)
  {
  	if (aposta[j] == sorteio[i])
    {
    	cont++;
    }
  }
}

	if (cont == 6)
    cout << "O apostador acertou todos os numeros" << endl;
  else
    cout << "O apostador nao acertou todos os numeros" << endl;

}
