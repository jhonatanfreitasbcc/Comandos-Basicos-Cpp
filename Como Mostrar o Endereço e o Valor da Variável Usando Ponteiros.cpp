#include <iostream>
#include <string>

int main(){
    
    std:: string veiculo = "carro";
    std:: string *ptr = &veiculo;

    std:: cout << ptr << std:: endl;//mostra o endereco de memoria da variavel veiculo
    std:: cout << *ptr;//mostra o valor da variavel - carro
    
    return 0;
}
