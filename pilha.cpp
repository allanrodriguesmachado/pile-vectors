#include <iostream>
#include "Pilha.h"

using namespace std;

Pilha::Pilha()
{
    tamanho = 0;
    estrutura = new tipoItem[maxItens];
}
Pilha::~Pilha()
{
    delete[] estrutura;
}
bool Pilha::estaCheia()
{
    return (tamanho == maxItens);
}
bool Pilha::estaVazia()
{
    return (tamanho == 0);
}
void Pilha::inserir(tipoItem item)
{
    if (estaCheia())
    {
        cout << "A pilha está cheia!\n";
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho++;
    }
}
tipoItem Pilha::remover()
{
    if (estaVazia())
    {
        cout << "A pilha esta varia!\n";
        return 0;
    }
    else
    {
        estrutura[tamanho - 1];
        return tamanho--;
    }
}
void Pilha::imprimir()
{
    cout << "Pilha: [ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << " ";
    }

    cout << "]\n";
}
int Pilha::tamanho()
{
    return tamanho;
}