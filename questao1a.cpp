#include <iostream>
#include <vector>
#include <string>

int buscaLinear(const std::vector<std::string> &livros, const std::string &titulo) {
    for (int i = 0; i < livros.size(); ++i) {
        if (livros[i] == titulo) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Vetor com os títulos de livros já definidos
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
    std::cout << "\nQual título de livro você procura?: ";
    std::getline(std::cin, titulo);

    int posicao = buscaLinear(listaLivros, titulo);

    if (posicao != -1) {
        std::cout << "Livro encontrado na posição vetor[" << posicao << "]" << std::endl;
    } else {
        std::cout << "Livro não encontrado." << std::endl;
    }

    return 0;
}
v