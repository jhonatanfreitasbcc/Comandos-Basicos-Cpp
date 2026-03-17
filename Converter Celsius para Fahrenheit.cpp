#include <iostream>

using namespace std;

int main(){
    
    float celsius;
    float celsiusParaFahrenheit;
    
    cout << "Digite sua temperatura em celsius: ";
    cin >> celsius;
    
    celsiusParaFahrenheit = (celsius * 1.8) + 32;
    
    cout << "A temperatura convertida para Fahrenheit é " << celsiusParaFahrenheit << endl;
    
    return 0;
}
