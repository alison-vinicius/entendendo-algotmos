// ESTUDAR PORQUE ESTOURA COM 1 BILHÃO
#include <iostream>
#include <vector>
using namespace std;

int pesquisa_binaria(vector<int>& lista, int item) {
    int baixo = 0;
    int alto = lista.size() - 1;
    
    while (baixo <= alto) {
        int meio = (baixo + alto) / 2;
        int chute = lista[meio];
        
        if (chute == item) {
            return meio;
        } else if (chute > item) {
            alto = meio - 1;
        } else {
            baixo = meio + 1;
        }
        
        // Para imprimir o índice do meio a cada iteração:
        // cout << meio << endl;
    }
    
    return -1; // Retorna -1 se o item não for encontrado
}

int main() {
    vector<int> minha_lista;
    
    minha_lista = {1,3,5,7,9};
    int item_procurado = 5;
    int indice = pesquisa_binaria(minha_lista, item_procurado);
    
    if (indice != -1) {
        cout << "Índice: " << indice << endl;
    } else {
        cout << "Item não encontrado." << endl;
    }
    
    return 0;
}
