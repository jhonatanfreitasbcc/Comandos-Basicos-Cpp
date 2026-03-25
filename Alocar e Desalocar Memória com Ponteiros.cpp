#include <iostream>

int main(){
    
    int *numero;
    numero = new int;
    
    *numero = 10;
    
    std:: cout << "endereco de memoria é: " << numero << std:: endl;
    std:: cout << "o valor armazenado é: " << *numero << std:: endl;
    
    delete numero;
    numero = nullptr;
    
    return 0;
}
