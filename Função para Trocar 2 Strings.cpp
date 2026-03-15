#include <iostream>
#include <string>

using namespace std;

void trocar_palavra(string &pessoa, string &pessoa2){
    string temp = pessoa;
    pessoa = pessoa2;
    pessoa2 = temp;
}

int main(){
    
    string pessoa = "nicolas";
    string pessoa2 = "jhonatan";
    
    cout << "Antes da troca: " << pessoa << " e " << pessoa2 << endl;
    trocar_palavra(pessoa, pessoa2);
    cout << "Depois da troca: " << pessoa << " e " << pessoa2 << endl;
    
    return 0;
    
}
