#include <iostream>

int main(){
    
    int vetor[] = {4, 3, 2, 1, 0};
    int tamanho = 5;
    int i;
    int j;
    int chave;
    
    for (i = 1; i < tamanho; i++){
        chave = vetor[i];
        j = i - 1;
        
        while (j >= 0 && vetor[j] > chave){
            vetor[j + 1] = vetor[j];
            j--;
        }
    vetor[j + 1] = chave;
    
    }
    
    std:: cout << "vetor ordenado" << std:: endl;
    
    for (i = 0; i < tamanho; i++){
        std:: cout << vetor[i] << " ";
    }
    
    return 0;
    
}
