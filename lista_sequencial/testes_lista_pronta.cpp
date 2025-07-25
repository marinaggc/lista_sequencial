#include "ListaSequencial.hpp"
#include <iostream>

using namespace std;

void mostrarLista(const ListaSequencial& lista) {
    cout << "Lista: ";
    for (int i = 1; i <= lista.getTamanho(); ++i) {
        cout << lista.acessarElemento(i) << " ";
    }
    cout << endl;
}

int main() {
    ListaSequencial lista;

    // Inserções automáticas
    lista.inserirElemento(1, 5);
    lista.inserirElemento(2, 10);
    lista.inserirElemento(3, 15);
    lista.inserirElemento(2, 7); // insere 7 na posição 2

    // Mostra estado atual
    cout << "Após inserções:\n";
    mostrarLista(lista);

    // Modificação
    lista.modificarElemento(3, 99); // posição 3 vira 99
    cout << "\nApós modificar posição 3 para 99:\n";
    mostrarLista(lista);

    // Remoção
    lista.removerElemento(1);
    cout << "\nApós remover elemento da posição 1:\n";
    mostrarLista(lista);

    // Testes finais
    cout << "\nTamanho final: " << lista.getTamanho() << endl;
    cout << (lista.estaCheia() ? "Lista cheia\n" : "Lista não está cheia\n");
    cout << (lista.estaVazia() ? "Lista vazia\n" : "Lista não está vazia\n");

    return 0;
}
