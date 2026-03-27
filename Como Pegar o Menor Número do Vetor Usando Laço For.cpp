#include <iostream>
#include <vector>

int main(){

    std:: vector<int> vetor = {4, 7, 1, 2, 0};

    int menor = vetor[0];

    for (int i = 0; i < vetor.size(); i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    std:: cout << "O menor elemento do vetor é: " << menor << std:: endl;

    return 0;
}
