#include <iostream>
#include <vector>

int main(){

    std::vector<int> vetor = {2, 3, 4, 5, 6, 7, 6};

    int indice_meio = vetor[vetor.size() / 2];

    std:: cout << "o valor do meio do vetor é: " << indice_meio << std:: endl;

    return 0;
}
