#include <iostream>
#include <vector>
#include <string>

struct Paciente {
    std::string nome;
    int prioridade;
};

void selectionSort(std::vector<Paciente> &pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (pacientes[j].prioridade < pacientes[min].prioridade) {
                min = j;
            }
        }
        if (min != i) {
            std::swap(pacientes[i], pacientes[min]);
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
    
    selectionSort(pacientes);

    std::cout << "\nLista de pacientes ordenada:\n";

    for (int i = 0; i < pacientes.size(); ++i) {
        std::cout << "Paciente: " << pacientes[i].nome << " | Prioridade: " << pacientes[i].prioridade << std::endl;
    }

    return 0;
}
