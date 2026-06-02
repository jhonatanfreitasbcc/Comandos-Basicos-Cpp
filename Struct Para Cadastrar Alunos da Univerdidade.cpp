#include <iostream>
#include <string>

struct Aluno {
    std::string nome;
    int ra;
    std::string curso;
};

int main() {

    int quantidade = 3;

    Aluno* alunos = new Aluno[quantidade];

    // Cadastro dos alunos
    for (int i = 0; i < quantidade; i++) {

        std::cout << "\nAluno " << i + 1 << std::endl;

        std::cout << "Nome: ";
        std::getline(std::cin >> std::ws, alunos[i].nome);

        std::cout << "RA do Aluno: ";
        std::cin >> alunos[i].ra;

        std::cout << "Curso do Aluno: ";
        std::getline(std::cin >> std::ws, alunos[i].curso);
    }

    // Exibição dos dados
    std::cout << "\n---- ALUNOS CADASTRADOS NO SISTEMA ----\n";

    for (int i = 0; i < quantidade; i++) {

        std::cout << "\nAluno " << i + 1 << std::endl;
        std::cout << "Nome:   " << alunos[i].nome << std::endl;
        std::cout << "RA:     " << alunos[i].ra << std::endl;
        std::cout << "Curso:  " << alunos[i].curso << std::endl;
    }

    delete[] alunos;

    return 0;
}
