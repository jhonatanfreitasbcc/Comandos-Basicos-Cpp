#include <iostream>

void trocar_valores(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int *numero1;
    numero1 = new int;
    
    int *numero2;
    numero2 = new int;
    
    std:: cout << "Digite o valor para numero 1: " << std:: endl;
    std:: cin >> *numero1;
    
    std:: cout << "Digite o valor para numero 2: " << std:: endl;
    std:: cin >> *numero2;
    
    std:: cout << "antes da troca numero 1: " << *numero1 << std:: endl;
    std:: cout << "antes da troca numero 2: " << *numero2 << std:: endl;
    
    trocar_valores(numero1, numero2);
    
    std:: cout << "o valor numero 1 depois da troca: " << *numero1 << std:: endl;
    std:: cout << "o valor numero 2 depois da troca: " << *numero2 << std:: endl;
    
    delete numero1;
    numero1 = nullptr;
    
    delete numero2;
    numero2 = nullptr;
    
    return 0;
    
}
