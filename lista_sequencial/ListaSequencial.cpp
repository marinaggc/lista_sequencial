#include "ListaSequencial.hpp"
#include <iostream>

ListaSequencial::ListaSequencial() {
    tamanho = 0;
}

bool ListaSequencial::estaVazia() const {
    return tamanho == 0;
}

bool ListaSequencial::estaCheia() const {
    return tamanho == MAX;
}

int ListaSequencial::getTamanho() const {
    return tamanho;
}

int ListaSequencial::acessarElemento(int pos) const {
    if (pos < 1 || pos > tamanho) {
        std::cerr << "Posição inválida.\n";
        return -1;
    }
    return dados[pos - 1];
}

void ListaSequencial::modificarElemento(int pos, int valor) {
    if (pos < 1 || pos > tamanho) {
        std::cerr << "Posição inválida.\n";
        return;
    }
    dados[pos - 1] = valor;
}

bool ListaSequencial::inserirElemento(int pos, int valor) {
    if (estaCheia() || pos < 1 || pos > tamanho + 1) {
        std::cerr << "Não é possível inserir.\n";
        return false;
    }
    for (int i = tamanho; i >= pos; --i) {
        dados[i] = dados[i - 1];
    }
    dados[pos - 1] = valor;
    tamanho++;
    return true;
}

bool ListaSequencial::removerElemento(int pos) {
    if (estaVazia() || pos < 1 || pos > tamanho) {
        std::cerr << "Não é possível remover.\n";
        return false;
    }
    for (int i = pos; i < tamanho; ++i) {
        dados[i - 1] = dados[i];
    }
    tamanho--;
    return true;
}
