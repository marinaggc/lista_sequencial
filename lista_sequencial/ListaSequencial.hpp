#ifndef LISTASEQUENCIAL_HPP
#define LISTASEQUENCIAL_HPP

const int MAX = 100;

class ListaSequencial {
private:
    int dados[MAX];
    int tamanho;

public:
    ListaSequencial();
    bool estaVazia() const;
    bool estaCheia() const;
    int getTamanho() const;

    int acessarElemento(int pos) const;
    void modificarElemento(int pos, int valor);
    bool inserirElemento(int pos, int valor);
    bool removerElemento(int pos);
};

#endif
