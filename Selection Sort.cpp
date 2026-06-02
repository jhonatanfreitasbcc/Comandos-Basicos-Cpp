#include <iostream>

int main(){
    int vetor[] = {4, 3, 2, 1, 0};
    int tamanho = 5;
    int i;
    int j;
    int temp;
    int menor;
        
    for (i = 0; i < tamanho - 1; i++){
        menor = i;
            
        for(j = i + 1; j < tamanho; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
            
    temp = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = temp;
        
    }
        
    std:: cout << "os vetores ordenados são: ";
        
    for (i = 0; i < tamanho; i++){
            std:: cout << vetor[i] << " ";
    }
    
    return 0;
}
