#include <iostream>
#include "Pilha.h"

using namespace std;

int main()
{
    Pilha pilha1;
    tipoItem item;
    int opcao;

    cout << "Programa gerador de pilha:\n";

    do
    {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "DIgite o elemento a ser inserido:\n";
            cin >> item;
            pilha1.inserir(item);
        } else if (opcao == 2) {
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        } else if (opcao == 3) {
            pilha1.imprimir();
        }
    } while (opcao != 0);

    return 0;
}