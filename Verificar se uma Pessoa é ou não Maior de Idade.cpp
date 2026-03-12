#include <iostream>

using namespace std;

int main(){
    
    int idade;
    
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    if (idade < 18){
        cout << "ENTRADA NÃO PERMITIDA" << endl;
    } else {
        cout << "ENTRADA PERMITIDA" << endl;
    }
    
    return 0;
}
