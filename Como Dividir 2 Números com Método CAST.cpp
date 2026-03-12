#include <iostream>

using namespace std;

int main(){
    
    int numero;
    int numero2;
    float divisao;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    cout << "Digite outro número: ";
    cin >> numero2;
    
    divisao = float(numero) / float(numero2);
    
    cout << "A divisão dos numeros são: " << divisao << endl;
    
    return 0;
}
