#include <iostream>

const int Tam = 10;

int main() {

    int tabela[Tam];

    for (int i = 0; i < Tam; i++) {
        tabela[i] = -1;
    }

    int valores[] = {34, 56, 12, 67};

    for (int i = 0; i < 4; i++) {

        int chave = valores[i];
        int indice = chave % Tam;

        while (tabela[indice] != -1) {
            indice = (indice + 1) % Tam;
        }

        tabela[indice] = chave;
    }

    for (int i = 0; i < Tam; i++) {
        std::cout << i << " -> " << tabela[i] << std::endl;
    }

    return 0;
}
