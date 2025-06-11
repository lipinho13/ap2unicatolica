#include <iostream>
#include <vector>
#include <string>

int buscaBinaria(const std::vector<std::string> &livros, const std::string &titulo) {
    int inicio = 0;
    int tamanho = livros.size();
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
    std::vector<std::string> listaLivros = {
        "A Culpa é das Estrelas", "A Droga da Obediência", "A Estrada", "A Fera de Gaia", 
        "A Menina que Roubava Livros", "A Montanha Mágica", "A Revolução dos Bichos", 
        "A Sombra do Vento", "A Teia de Charlotte", "1984", "Admirável Mundo Novo", 
        "Alice no País das Maravilhas", "O Alquimista", "Cem Anos de Solidão", 
        "A Hora da Estrela", "A Metamorfose", "As Crônicas de Nárnia: O Leão, a Feiticeira e o Guarda-Roupa", 
        "Assassinato no Expresso do Oriente", "Corte de Espinhos e Rosas", "Crepúsculo", 
        "Dom Casmurro", "Duna", "Ensaio sobre a Cegueira", "Fahrenheit 451", "Frankenstein", 
        "O Grande Gatsby", "Harry Potter e a Pedra Filosofal", "Jogos Vorazes", 
        "Memórias Póstumas de Brás Cubas", "O Código Da Vinci", "O Cortiço", 
        "O Guia do Mochileiro das Galáxias", "O Iluminado", "O Ladrão de Raios", "O Pequeno Príncipe", 
        "O Poder do Hábito", "O Silmarillion", "O Sol é Para Todos", 
        "O Senhor dos Anéis: A Sociedade do Anel", "Onde Vivem os Monstros", "Orgulho e Preconceito", 
        "O Retrato de Dorian Gray", "Percy Jackson e o Ladrão de Raios", "Sapiens: Uma Breve História da Humanidade", 
        "O Hobbit", "Um Estudo em Vermelho", "Vidas Secas"
    };

    std::string titulo;
    std::cout << "\nQual titulo de livro você procura?: ";
    std::getline(std::cin, titulo);

    int posicao = buscaBinaria(listaLivros, titulo);

    if (posicao != -1) {
        std::cout << "Livro encontrado na posição vetor[" << posicao << "]" << std::endl;
    } else {
        std::cout << "Livro não encontrado." << std::endl;
    }

    return 0;
}