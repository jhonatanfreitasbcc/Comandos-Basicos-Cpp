#include <iostream>

int main(){
    
    int vetor[] = {10, 7, 8, 9, 1, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    int pilha[tamanho];
    int topo = -1;
    
    pilha[++topo] = 0;
    pilha[++topo] = tamanho - 1;
    
    while (topo >= 0){
        
        int fim = pilha[topo--];
        int inicio = pilha[topo--];
        
        int pivo = vetor[fim];
        int i = inicio - 1;
        
        for (int j = inicio; j < fim; j++){
            if (vetor[j] < pivo){
                i++;
                
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
        
        int temp = vetor[i + 1];
        vetor[i + 1] = vetor[fim];
        vetor[fim] = temp;
        
        int posPivo = i + 1;
        
        if (posPivo - 1 > inicio){
            pilha[++topo] = posPivo + 1;
            pilha[++topo] = fim;
        }
        
        if (posPivo + 1 < fim){
            pilha[++topo] = posPivo + 1;
            pilha[++topo] = fim;
        }
    }
    
    std:: cout << " vetor ordenado: ";
    
    
    for (int i = 0; i < tamanho; i++){
        std:: cout << vetor[i] << " ";
    }
    
    return 0;
}
