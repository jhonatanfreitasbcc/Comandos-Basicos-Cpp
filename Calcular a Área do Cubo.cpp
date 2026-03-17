#include <iostream>

using namespace std;

int main(){
    
    float aresta;
    float area;
    
    cout << "Digite o tamanho da Aresta do Cubo: ";
    cin >> aresta;
    
    area = 6 * (aresta * aresta);
    
    cout << "a area total do cubo é: " << area << endl;
    
    return 0;
    
}
