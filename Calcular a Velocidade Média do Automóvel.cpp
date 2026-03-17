#include <iostream>

using namespace std;

int main(){
    
    float distancia;
    float tempo;
    float velocidadeMedia;
    
    cout << "Digite a distancia percorrida em Quilometros: ";
    cin >> distancia;
    
    cout << "Digite o tempo em horas: ";
    cin >> tempo;
    
    velocidadeMedia = distancia / tempo;
    
    cout << "A velocidade media da viagem foi " << velocidadeMedia << endl;
    
    return 0;
}
