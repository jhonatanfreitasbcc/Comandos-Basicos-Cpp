#include <iostream>

int main(){
    
    int numero = 20;
    int *ponteiro;
    
    ponteiro = &numero;
    
    std:: cout << "o endereco de memoria da variavel é: " << ponteiro << std:: endl;
    
    return 0;
    
}
