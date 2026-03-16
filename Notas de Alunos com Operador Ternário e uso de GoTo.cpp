#include <iostream>
#include <string>

using namespace std;

int main(){
    
    float nota1;
    float nota2;
    float result;
    string palavra;
    char opc;
    

    inicio:
    

    cout << "Digite a nota 1: ";
    cin >> nota1;
    
    cout << "Digite a nota 2: ";
    cin >> nota2;
    
    result = (nota1 + nota2) / 2;
    
    (result < 60) ? palavra="Reprovado" : palavra="Aprovado";
    
    cout << "a situacao do estudante é: " << palavra << endl;
    
    cout << "Digite a opcao [S/N]: ";
    cin >> opc;
    
    if (opc == 's' || opc == 'S'){
        goto inicio;
    }
    
    return 0;
}
