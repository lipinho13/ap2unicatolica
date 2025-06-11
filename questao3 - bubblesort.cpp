#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> gerarVetorAleatorio(int tamanho, int min, int max) {
    vector<int> vetor;
    srand(time(0));
    for (int i = 0; i < tamanho; i++) {
        vetor.push_back(rand() % (max - min + 1) + min);
    }
    return vetor;
}

void bubbleSort(vector<int> &vetor) {
    int n = vetor.size();
    bool troca;
    for (int i = 0; i < n - 1; i++) {
        troca = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                swap(vetor[j], vetor[j + 1]);
                troca = true;
            }
        }
        if (troca == false){
            break;
        }
    }
}

int main() {
    vector<int> numeros = gerarVetorAleatorio(50, 1, 500);

    cout << "Vetor não ordenado:" << endl;
    
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(numeros);

    cout << "Vetor ordenado:" << endl;
    
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
