#include "ListaSequencial.hpp"
#include <iostream>

using namespace std;

void mostrarMenu() {
    cout << "\n====== MENU LISTA SEQUENCIAL ======\n";
    cout << "1. Criar nova lista (reiniciar)\n";
    cout << "2. Verificar se a lista está vazia\n";
    cout << "3. Verificar se a lista está cheia\n";
    cout << "4. Obter tamanho da lista\n";
    cout << "5. Acessar/modificar valor de uma posição\n";
    cout << "6. Inserir elemento em uma posição\n";
    cout << "7. Remover elemento de uma posição\n";
    cout << "8. Mostrar lista atual\n";
    cout << "0. Sair\n";
    cout << "Escolha: ";
}

void mostrarLista(const ListaSequencial& lista) {
    cout << "Lista: ";
    for (int i = 1; i <= lista.getTamanho(); ++i) {
        cout << lista.acessarElemento(i) << " ";
    }
    cout << endl;
}

int main() {
    ListaSequencial lista;
    int opcao;

    do {
        mostrarMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                lista = ListaSequencial();
                cout << "Lista reiniciada com sucesso.\n";
                break;

            case 2:
                cout << (lista.estaVazia() ? "Lista está vazia.\n" : "Lista NÃO está vazia.\n");
                break;

            case 3:
                cout << (lista.estaCheia() ? "Lista está cheia.\n" : "Lista NÃO está cheia.\n");
                break;

            case 4:
                cout << "Tamanho atual: " << lista.getTamanho() << endl;
                break;

            case 5: {
                int pos, valor;
                cout << "Digite a posição (1 a " << lista.getTamanho() << "): ";
                cin >> pos;
                cout << "Valor atual: " << lista.acessarElemento(pos) << endl;
                cout << "Digite novo valor: ";
                cin >> valor;
                lista.modificarElemento(pos, valor);
                break;
            }

            case 6: {
                int pos, valor;
                cout << "Digite a posição para inserir: ";
                cin >> pos;
                cout << "Digite o valor: ";
                cin >> valor;
                lista.inserirElemento(pos, valor);
                break;
            }

            case 7: {
                int pos;
                cout << "Digite a posição para remover: ";
                cin >> pos;
                lista.removerElemento(pos);
                break;
            }

            case 8:
                mostrarLista(lista);
                break;

            case 0:
                cout << "Encerrando...\n";
                break;

            default:
                cout << "Opção inválida.\n";
        }

    } while (opcao != 0);

    return 0;
}
