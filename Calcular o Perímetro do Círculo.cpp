#include <iostream>
#define pi 3.1415

using namespace std;

int main(){
    
    float raio;
    float perimetro;
    
    cout << "Digite o raio do Circulo: ";
    cin >> raio;
    
    perimetro = 2 * pi * raio;
    
    cout << "O perimetro do circulo é: " << perimetro << endl;
    
    return 0;
    
    
}
