#include <iostream>

using namespace std;

int main(){
    
    //1 forma de declarar uma matriz
    int linhas;
    int colunas;
    int matriz[3][3] = {10, 20, 30},
                       {40, 50, 60},
                       {70, 80, 90}
    };
    
    //2 forma de declarar uma matriz
    int matriz[3][3];
    int linhas;
    int colunas;
    
    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[0][2] = 30;
    
    matriz[1][0] = 40;
    matriz[1][1] = 50;
    matriz[1][2] = 60;
    
    matriz[2][0] = 70;
    matriz[2][1] = 80;
    matriz[2][2] = 90;
    
    for (linhas = 0; linhas < 3; linhas++){
        for (colunas = 0; colunas < 3; colunas++){
            cout << matriz[linhas][colunas] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
