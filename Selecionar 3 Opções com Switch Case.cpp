#include <iostream>

using namespace std;

int main(){
    
    int valor;
    
    cout << "Selecione a cor:\n ";
    cout << "Amarelo[1], Verde[2] ou Preto[3]: ";
    
    cin >> valor;
    
    switch(valor){
        case 1:
            cout << "Cor Escolhida foi o Amarelo" << endl;
            break;
        
        case 2:
            cout << "Cor Escolhida foi o Verde" << endl;
            break;
        
        case 3:
            cout << "Cor Escolhida foi o Preto" << endl;
            break;
            
        default:
            cout << "Escolha um número válido" << endl;
    }
    
    return 0;
}
