#include <iostream>

using namespace std;

int main(){
    
    int numero;
    int numero2;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    cout << "Digite outro número: ";
    cin >> numero2;
    
    int sub = numero - numero2;
    
    cout << "A subtração dos números são: " << sub << endl;
    
    return 0;
}
