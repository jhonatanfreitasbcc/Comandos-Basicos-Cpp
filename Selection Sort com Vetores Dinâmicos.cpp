#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> vetor;
    int qtd;
    int valor;
    int i;
    int j;
    int menor;
    int temp;
    
    std:: cout << "digite o tamanho do vetor: ";
    std:: cin >> qtd;
    
    for (i = 0; i < qtd; i++){
        std:: cout << " digite os valores do vetor: ";
        std:: cin >> valor;
        vetor.push_back(valor);
    }
    
    for (i = 0; i < qtd - 1; i++){
        menor = i;
        
        for (j = i + 1; j < vetor.size(); j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        
        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }
    
    std:: cout << " os vetores ordenados sao: ";
    
    for (i = 0; i < vetor.size(); i++){
        std:: cout << vetor[i] << " ";
    }
    
    return 0;
}
