#include <iostream>

using namespace std;

int main(){
    
    int n1, n2, result, media = 6;
    
    cout << "Digite a nota 1 da prova: ";
    cin >> n1;
    
    cout << "Digite a nota 2 da prova: ";
    cin >> n2;
    
    result = (n1 + n2) / 2; 
    
    if (result >= media){
        cout << "Aluno Aprovado" << endl;
    } else {
        cout << "Aluno Reprovado" << endl;
    }
    
    return 0;
}
