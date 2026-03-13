#include <iostream>

using namespace std;

int main(){
    
    float temperatura;
    
    cout << "Digite a sua temperatura: ";
    cin >> temperatura;
    
    if (temperatura < 10){
        cout << "Muito Frio" << endl;
    } else if (temperatura >= 10 && temperatura < 19){
        cout << "Frio" << endl;
    } else if (temperatura >= 19 && temperatura < 25){
        cout << "Normal" << endl;
    } else if (temperatura >= 25 && temperatura < 30){
        cout << "Calor" << endl;
    } else {
        cout << "Muito Calor" << endl;
    }
    
    return 0;
}
