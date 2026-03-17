#include <iostream>

using namespace std;

int main(){
    
    int valor;
    
    cout << "Digite uma opcao: ";
    cout << "[1]CARRO, [2]MOTO, [3]AVIAO e [4]HELICOPTERO = ";
    cin >> valor;
    
    switch(valor){
        case 1:
        case 2:
            cout << "Transporte terrestre\n";
            switch(valor){
                case 1:
                    cout << "Carro selecionado\n" << endl;
                    break;
                case 2:
                    cout << "Moto selecionado\n" << endl;
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Transporte aereo" << endl;
            switch(valor){
                case 3:
                    cout << "Aviao selecionado" << endl;
                    break;
                case 4:
                    cout << "Helicoptero selecionado" << endl;
                    break;
            }
            break;
        default:
            cout << "Nenhuma das opcoes sao validas" << endl;
    }
    
    return 0;
}
