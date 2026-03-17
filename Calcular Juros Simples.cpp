#include <iostream>

using namespace std;

int main(){
    
    float juros;
    float capital;
    float taxaJuros;
    float tempo;
    float montante;
    
    cout << "Digite a quantidade de dinheiro que deseja fazer aplicacao: ";
    cin >> capital;
    
    cout << "Digite a taxa de juros mensal: ";
    cin >> taxaJuros;
    taxaJuros = taxaJuros / 100;
    
    cout << "Digite o tempo que deseja deixar guardado no banco: ";
    cin >> tempo;
    
    
    juros = capital * taxaJuros * tempo;
    montante = capital + juros;
    
    cout << "o juros total gerado foi de " << juros << endl;
    cout << "o valor da aplicacao somado com os juros é " << montante << endl; 
    
    return 0;
}
