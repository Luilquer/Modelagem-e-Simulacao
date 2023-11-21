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
    while (numero.length() < digitos * 2)
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
    //variável que armazena a dimensão da matriz
    int n = 10;
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
        //Quebra de linha
        cout << "\n";
        for (int coluna = 0; coluna < n; coluna++)
        {
            //Verifica se o tamanho do elemnto é menor que 8. Atribui um 0 à frente
            while (matriz[linha][coluna].length() < 8)
            {
                matriz[linha][coluna] = "0" + matriz[linha][coluna];
            }
            //Exibindo os valores obtidos
            cout << " " << matriz[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "--------------------------------------------------------------------------------------------------";
    return 0;
}
