#include <iostream>

using namespace std;

int main(){
    
    int numero;
    
    cout << "Digite um numero: ";
    cin >> numero;
    
    if (numero %2 == 0){
        cout << "Número Par" << endl;
    } else {
        cout << "Número Ímpar" << endl;
    }
    
    return 0;
}
