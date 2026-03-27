#include <iostream>
#include <vector>

int main(){

    std:: vector<int> vetor = {3, 1, 5, 2, 8, 9, 0};

    std:: cout << "os numeros pares dentro do vetos sao: " << std:: endl;

    for (int i = 0; i < vetor.size(); i++){
        if (vetor[i] %2 == 0){
            std:: cout << vetor[i] << std:: endl;
        }
    }

    return 0;
}
