#include <iostream>

using namespace std;

void trocar_valor (int &a, int &b){
    int temp = a;
    a = b; 
    b = temp;
}

int main(){
    
    int a = 3;
    int b = 5;
    
    cout << "antes da troca os valores são: "<<a<< " e " <<b<< endl;
    trocar_valor(a, b);
    cout << "depois da troca: "<<a<< " e " <<b<< endl;
    
    return 0;
}
