#include <iostream>

using namespace std;

int main(){
    
    int vetor[5];
    int i;
    
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    
    //1 forma seria com o sizeof(medir o tamanho do vetor) muito util
    //quando precisar mudar somente o tamanho do vetor
    for (i = 0; i < sizeof(vetor) / 4; i++){
        cout << vetor[i] << endl;
    }
    
    //2 forma seria com o fim do vetor(tamanho do vetor) forma mais comum
    for (i = 0; i < 5; i++){
        cout << vetor[i] << endl;
    }
    
    return 0;
}
