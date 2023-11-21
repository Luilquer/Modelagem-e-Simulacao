/* 
 *   Método Congruente Linear Multiplicativo
*/

#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

int a = 4; // constante positiva
int c = 3; // constante positiva
// var m = Math.pow(2, 26); // 0 até 67108864

int m = 255; // 0 até 255(2^8-1) ->O módulo de m deve ser grande.
//Uma vez que os valores de x estarão entre 0 e m -1, o período nunca será maior do que m;
//Numa máquina de 32 bits, o valor máximo do período será: 2bit-1-1 = 2^31-1 = 2.147.483.647
//Para que a computação de mod m seja eficiente, m deve ser uma potência de 2, isto é, 2k.
//Neste caso, o mod m poderá ser obtido truncando-se o resultado à direita por k bits.

int xn = 23;         //(Xo) 0 <= xn >= m-1; //0 <= xn >= m-1
int xn_inicial = 23; //(Xo) 0 <= xn >= m-1
const int digitos = 8;
int qtdInteracoes = 0;

// recebe os valores x e R
void checkLength(int x, double r)
{
    string numero = to_string(x);     // Converte para String
    qtdInteracoes++;                  // Incrementa a variavel para indicar o número de interações
    while (numero.length() < digitos) // Loop enquanto o tamanho
    {
        numero = "0" + numero; // Adiciona o 0 na string
    }
    //Mostra na tela esses outputs
    cout << qtdInteracoes << "º interecao" << endl;
    cout << "x = " << numero << endl;
    cout << "R = " << r << endl;
}

int nextRand(int x)
{
    //funcao do congruente linear
    x = (a * x + c) % m;
    //retorna a semente seguinte
    return x;
}

//Funcao para descobrir a proxima semente
void nextRandFloat()
{
    double R = (double)xn / (double)m; //numero real
    xn = nextRand(xn);                 //obtendo a proxima semente
    if (xn == xn_inicial)
    {                                              // Verificar se o valor da proxima semente é igual ao inicial
        checkLength(xn, R);                        // Pula pra funcao
        cout << "Fim, acabou a sequencia" << endl; // Mostra que acabou o programa
    }
    else
    {                       // Continua o Loop do programa
        checkLength(xn, R); // Verificar se o valor da proxima semente é igual ao inicial
        nextRandFloat();    // Inicia o loop
    }
}

int main()
{
    cout << "Xo é " << xn << endl;
    nextRandFloat();

    return 0;
}
