#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    
    std::srand(std::time(nullptr));
    
    int vetor[10];
    
    for (int i = 0; i < 10; i++){
        vetor[i] = std::rand() % 21;
    }
    
    std:: cout << "os vetores gerados são: ";
    
    for (int i = 0; i < 10; i++){
        std:: cout << vetor[i] << " ";
    }
    
    return 0;
}
