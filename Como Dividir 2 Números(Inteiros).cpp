#include <iostream>

using namespace std;

int main(){
    
    int numero;
    int numero2;
    int divisao; //aqui só faz divisão inteira, precisa fazer CAST para divisão não inteira(vírgulas)...
    
    cout << "Digite um número: ";
    cin >> numero;
    
    cout << "Digite outro número: ";
    cin >> numero2;
    
    divisao = numero / numero2;
    
    cout << "A divisão dos numeros são: " << divisao << endl;
    
    return 0;
}
