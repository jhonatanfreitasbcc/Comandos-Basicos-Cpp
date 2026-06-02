#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> vetor;
    int i;
    int j;
    int tamanho;
    int valor;
    int temp;
    int indice;
    
    std:: cout << "Digite o tamanho do vetor: ";
    std:: cin >> tamanho;
    
    for (i = 0; i < tamanho; i++){
        std:: cout << "Digite os valores do vetor: ";
        std:: cin >> valor;
        vetor.push_back(valor);
    }
    
    for (i = 0; i < vetor.size(); i++){
        for (j = 0; j < vetor.size() - 1; j++){
            if (vetor[j + 1] < vetor[j]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        
        }
        
    }
    
    std:: cout << "Digite o indíce onde quer remover o vetor: ";
    std:: cin >> indice;
    
    vetor.erase(vetor.begin() + indice);
        
    std:: cout << " os vetores ordenados sao: ";
        
    for (i = 0; i < vetor.size(); i++){
        std:: cout << vetor[i] << " ";
    }
    
    return 0;
}
