#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std:: vector<int> vetor = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    std:: sort(vetor.begin(), vetor.end());

    for (int i = 0; i < vetor.size(); i++){
        std:: cout << vetor[i] << " ";
    }

    return 0;
}
