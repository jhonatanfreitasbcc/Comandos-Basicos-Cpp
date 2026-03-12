#include <iostream>

using namespace std;

int main(){
    
    int numero = 10;
    cout << "antes do incremento: " << numero << endl;
    
    numero += 1; // incremento forma 1
    cout << "incremento forma 1: " << numero << endl;
    
    numero = numero + 1; // incremento forma 2
    cout << "incremento forma 2: " << numero << endl;
    
    numero++; // incremento forma 3
    cout << "incremento forma 3: " << numero << endl;
    
    return 0;
}
