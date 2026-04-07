#include <iostream>

int main(){
    
    int vetor[] = {5, 3, 2, 1, 0};
    int n = 5;
    int i;
    int j;
    
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++){
        std:: cout << vetor[i] << " ";
    }
    
    return 0;
}
