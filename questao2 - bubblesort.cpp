#include <iostream>
#include <vector>
#include <string>

struct Paciente {
    std::string nome;
    int prioridade;
};

void bubbleSort(std::vector<Paciente> &pacientes) {
    int n = pacientes.size();
    bool troca;
    for (int i = 0; i < n - 1; ++i) {
        troca = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (pacientes[j].prioridade > pacientes[j + 1].prioridade) {
                std::swap(pacientes[j], pacientes[j + 1]);
                troca = true;
            }
        }
        if (troca == false) {
            break;
        }
    }
}

int main() {
    std::vector<Paciente> pacientes = {
        {"Ana", 5}, {"Pedro", 2}, {"Carla", 4}, {"Lucas", 1},
        {"Mariana", 3}, {"Fernanda", 5}, {"Rafael", 2}, {"Beatriz", 4},
        {"Guilherme", 1}, {"Sofia", 3}};

    std::cout << "Lista de pacientes:\n";
    for (int i = 0; i < pacientes.size(); ++i) {
        std::cout << "Paciente: " << pacientes[i].nome << " | Prioridade: " << pacientes[i].prioridade << std::endl;
    }
    
    bubbleSort(pacientes);

    std::cout << "\nLista de pacientes ordenada:\n";

    for (int i = 0; i < pacientes.size(); ++i) {
        std::cout << "Paciente: " << pacientes[i].nome << " | Prioridade: " << pacientes[i].prioridade << std::endl;
    }

    return 0;
}
