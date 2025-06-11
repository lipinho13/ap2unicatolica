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

int partir(vector<int> &vetor, int baixo, int alto) {
    int pivo = vetor[alto];
    int i = baixo - 1;
    for (int j = baixo; j < alto; j++) {
        if (vetor[j] <= pivo) {
            i++;
            swap(vetor[i], vetor[j]);
        }
    }
    swap(vetor[i + 1], vetor[alto]);
    return i + 1;
}

void quickSort(vector<int> &vetor, int baixo, int alto) {
    if (baixo < alto) {
        int pivo = partir(vetor, baixo, alto);
        quickSort(vetor, baixo, pivo - 1);
        quickSort(vetor, pivo + 1, alto);
    }
}

int main() {
    vector<int> numeros = gerarVetorAleatorio(50, 1, 500);

    cout << "Vetor não ordenado:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    quickSort(numeros, 0, numeros.size() - 1);

    cout << "Vetor ordenado:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}