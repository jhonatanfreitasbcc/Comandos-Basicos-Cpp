#include <iostream>
#include <vector>

int main(){

    std:: vector<int> vet = {2, 3, 4, 5, 6};
    int soma = 0;

    for (int i = 0; i < 5; i++){
        soma += vet[i];
    }

    std:: cout << "a soma dos vetores sao: " << soma << std:: endl;

    return 0;
}
