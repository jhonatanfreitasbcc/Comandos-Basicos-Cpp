#include <iostream>

int main(){
    
    int vetor[10];
    int *ptr;
    
    ptr = &vetor[0];
    *ptr = 10;
    std:: cout << vetor[0] << std:: endl;
    
    *(ptr+=1);
    *ptr = 20;
    std:: cout << vetor[1] << std:: endl;
    
    *(ptr+=1);
    *ptr = 30;
    std:: cout << vetor[2] << std:: endl;
    
    return 0;
    
}
