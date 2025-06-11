#include <iostream>
#include <vector>
#include <string>

int buscaBinaria(const std::vector<std::string> &livros, const std::string &titulo, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (livros[meio] == titulo) {
            return meio;
        }

        if (livros[meio] < titulo) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int qtde;
    std::cout << "Quantos livros serão cadastrados? ";
    std::cin >> qtde;
    std::cin.ignore();

    std::vector<std::string> listaLivros(qtde);
    for (int i = 0; i < qtde; ++i) {
        std::cout << "Título do livro " << i << ": ";
        std::getline(std::cin, listaLivros[i]);
    }

    std::string titulo;
    std::cout << "\nQual título de livro voce procura?: ";
    std::getline(std::cin, titulo);

    int posicao = buscaBinaria(listaLivros, titulo, qtde);

    if (posicao != -1) {
        std::cout << "Livro encontrado na posição vetor[" << posicao << "]" << std::endl;
    } else {
        std::cout << "Livro não encontrado." << std::endl;
    }

    return 0;
}
