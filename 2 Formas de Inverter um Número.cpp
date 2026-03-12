#include <iostream>

using namespace std;

int main(){
    
    int numero;
    int numero2;
    
    cout << "Digite um numero para inverter: ";
    cin >> numero;
    
    numero =-numero; // forma 1 de inverter um numero
    
    cout << "o numero invertido é: " << numero << endl;
    
    cout << "Digite o numero 2 para inverter: ";
    cin >> numero2;
    
    numero2 = numero2 * -1; // forma 2 de inverter um numero;
    
    cout << "o numero invertido é: " << numero2 << endl;
    
    return 0;
}
