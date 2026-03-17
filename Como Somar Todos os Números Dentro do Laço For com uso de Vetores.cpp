#include <iostream>

using namespace std;

int main(){
    
    int vetor[5];
    
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    
    int contador;
    int soma = 0;
    
    for (contador = 0; contador < 5; contador++){
        soma += vetor[contador];
    }
    
    cout << "a soma dos vetores são: " << soma << endl;
    cout << "\nFim da Execução" << endl;
    
    return 0;
    
}
