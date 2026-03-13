#include <iostream>

using namespace std;

int main(){
    
    float peso, altura, result;
    
    cout << "Digite seu peso: ";
    cin >> peso;
    
    cout << "Digite sua altura: ";
    cin >> altura;
    
    result = peso / (altura * altura);
    
    if (result < 18.5){
        cout << "Magreza" << endl;
    } else if (result >= 18.5 && result < 24.9){
        cout << "Normal" << endl;
    } else if (result >= 24.9 && result < 29.9){
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidade" << endl;
    }
    
    return 0;
}
