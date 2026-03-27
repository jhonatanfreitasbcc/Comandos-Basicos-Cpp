#include <iostream>
#include <vector>

int main(){

    std:: vector<int> vetor = {2, 3, 4, 5, 6};

    int maior = vetor[0];

    for (int i = 0; i < vetor.size(); i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }

    }
    
    std:: cout << "O maior valor desse vetor é: " << maior << std:: endl;
    
    return 0;
}
