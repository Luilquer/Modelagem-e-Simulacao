// #include <iostream>
// #include <string>
// #include <math.h>
// #include <sstream>
// using namespace std;

// //O erro gera quando converte o valor elevado ao quadrado para string

// //variaveis globais
// int semente = 442148;
// const int digitos = 5;

// int elevaAoQuadrado(int numero)
// {
//     cout << pow(numero, 2) << endl;

//     return pow(numero, 2);
// }

// int nextRand()
// {

//     //converter de int para string
//     cout << "semente: " << semente << endl;
//     string numero = " ";

//     //O PROBELMA É AQUI, QUANDO PEGA O VAOR ELEVADO AO QUADRADO E TRANSFORMA DE INT PARA STRING
//     numero = to_string(elevaAoQuadrado(semente));
//     cout << "semente*semente: " << numero << endl;

//     //enquanto o tamnho da string (n) for menor que o número de digitos vezes 2
//     // atribui um zero à frente do valor gerado
//     cout << "Tamanho da string: " << numero.length() << endl;
//     while (numero.length() < digitos * 2)
//     {
//         numero = "0" + numero;
//     }

//     cout << "\nnumero com zeros: " << numero << endl;

//     //incio do corte, arredonda para baixo
//     int inicio = floor(digitos / 2);
//     cout << "inicio corte: " << inicio << endl;

//     // int fim = digitos;
//     // cout << "fim corte: " << fim << endl;

//     //substr(indice inicial, quantidade de caracteres);
//     //retorna uma string com 8 caracteres
//     string caracteres = numero.substr(inicio, 6);

//     //converte de string para int
//     semente = stoic(caracteres);

//     cout << "\nsemente string para int: " << semente << endl;

//     return semente;
// }

// int main()
// {
//     int n = 2;
//     string matriz[n][n];

//     // int cont = 0;

//     // cout << "\nValores gerados: \n";

//     // for (int i = 0; i < 100; i++)
//     // {

//     //     cout << nextRand() << " \n";

//     //     cont++;
//     // }

//     // cout << "\n";

//     // cout << "\n\nQuantidade de NA's: " << cont << endl;

//     // cout << " \n\n\n\n\n teste string: "
//     //      << testeString << endl;
//     // cout << "numero: " << teste << endl;

//     for (int linha = 0; linha < n; linha++)
//     {
//         for (int coluna = 0; coluna < n; coluna++)
//         {

//             matriz[linha][coluna] = to_string(nextRand());
//         }
//     }
//     cout << "--------------------------------------------------------------------------------------------------";
//     for (int linha = 0; linha < n; linha++)
//     {
//         cout << "\n";

//         for (int coluna = 0; coluna < n; coluna++)
//         {
//             // if (matriz[linha][coluna].length() <= 3)
//             // {
//             //     matriz[linha][coluna] = "00000" + matriz[linha][coluna];
//             // }
//             // else
//             // {
//             //     matriz[linha][coluna] = "0000" + matriz[linha][coluna];
//             // }

//             cout << " " << matriz[linha][coluna] << " ";
//         }
//         cout << "\n";
//     }

//     cout << "--------------------------------------------------------------------------------------------------";

//     return 0;
// }

#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

//variáveis globais
int semente = 3187;
const int digitos = 4;

//Método de quadrados médios
int nextRand()
{
    //Declaração de uma variável do tipo string, atribuindo vazio " ";
    cout << "\nsemente: " << semente << endl;
    string numero = " ";

    //Eleva o numero ao quadrado e converte para string
    numero = to_string(pow(semente, 2));
    cout << "(semente)^2: " << numero << endl;

    //enquanto o tamnho da string (n) for menor que o número de digitos vezes 2
    //atribui um zero à frente do valor gerado
    cout << "Tamanho da string: " << numero.length() << endl;
    while (numero.length() < 15)
    {
        numero = "0" + numero;
    }

    //incio do corte, arredonda para baixo
    int inicio = floor(digitos / 2);
    cout << "inicio corte: " << inicio << endl;

    cout << "quantidade de caracteres: " << digitos << endl;
    cout << "\n-------------------------------------";

    //substr(indice inicial, quantidade de caracteres);
    //retorna uma string com 8 caracteres
    string caracteres = numero.substr(inicio, digitos);

    //converte de string para int
    semente = stoic(caracteres);

    return semente;
}

int main()
{
    //variável que armazena a dimenção da matriz
    int n = 4;
    //Declaração de um array bidimensional do tipo string (matriz)
    string matriz[n][n];

    //Preenchimento da matriz
    for (int linha = 0; linha < n; linha++)
    {
        for (int coluna = 0; coluna < n; coluna++)
        {

            matriz[linha][coluna] = to_string(nextRand());
        }
    }

    //Percorrendo a matriz e exibindo os seus elementos (tabela)
    cout << "\n\nTabela com NA's: \n";
    cout << "--------------------------------------------------------------------------------------------------";
    for (int linha = 0; linha < n; linha++)
    {
        cout << "\n";

        for (int coluna = 0; coluna < n; coluna++)
        {
            // if (matriz[linha][coluna].length() < 8)
            // {
            //     matriz[linha][coluna] = "0" + matriz[linha][coluna];
            // }

            cout << " " << matriz[linha][coluna] << " ";
        }
        cout << "\n";
    }

    cout << "--------------------------------------------------------------------------------------------------";

    return 0;
}
// Método de quadrados médios
// int nextRand()
// {
//     //Declaração de uma variável do tipo string, atribuindo vazio " ";
//     string numero = " ";
//     //Eleva o numero ao quadrado e converte para string
//     numero = to_string(pow(semente, 2));
//     //Enquanto o tamanho da string (n) for menor que o número de digitos vezes 2
//     //Atribui um zero à frente do valor gerado
//     while (numero.length() < digitos * 2)
//     {
//         numero = "0" + numero;
//     }
//     //incio do corte, arredonda para baixo
//     int inicio = floor(digitos / 2);
//     //substr(indice inicial, quantidade de caracteres);
//     //retorna uma string com 8 caracteres
//     string caracteres = numero.substr(inicio, digitos);
//     //Converte de string para int
//     semente = stoic(caracteres);
//     //Retorna a semente gerada
//     return semente;
// }

// int main()
// {
//     //variável que armazena a dimensão da matriz
//     int n = 10;
//     //Declaração de um array bidimensional do tipo string (matriz)
//     string matriz[n][n];
//     //Preenchimento da matriz
//     for (int linha = 0; linha < n; linha++)
//     {
//         for (int coluna = 0; coluna < n; coluna++)
//         {
//             matriz[linha][coluna] = to_string(nextRand());
//         }
//     }
//     //Percorrendo a matriz e exibindo os seus elementos (tabela)
//     cout << "\n\nTabela com NA's: \n";
//     for (int linha = 0; linha < n; linha++)
//     {
//         //Quebra de linha
//         cout << "\n";
//         for (int coluna = 0; coluna < n; coluna++)
//         {
//             //Verifica se o tamanho do elemnto é menor que 8. Atribui um 0 à frente
//             while (matriz[linha][coluna].length() < 8)
//             {
//                 matriz[linha][coluna] = "0" + matriz[linha][coluna];
//             }
//             //Exibindo os valores obtidos
//             cout << " " << matriz[linha][coluna] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }