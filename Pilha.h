typedef int tipoItem;
const int maxItens = 100;

class Pilha
{
private:
    int tamanho;
    tipoItem* estrtura;

public:
    Pilha();  // Construct Stack
    ~Pilha(); // Descruct Stack
    bool estaCheia(); //Verifica se a pilha está cheia
    bool estaVazia(); //Verificar se  a pilha está vazia
    void inserir(tipoItem item); //PUSH
    tipoItem remover(); //POP
    void imprimir(); //Print
    int tamanho(); //Lenght
};