#include <iostream>

    class Pessoa {
    private:
        std::string nome;
        int idade;
    public:
        Pessoa(std::string nome, int idade) {
            this->nome = nome;
            this->idade = idade;
        }

        void apresentar() {
            std::cout << "Ola, meu nome e " 
            << this->nome << " e tenho " 
            << this->idade << " anos." 
            << std::endl;
        }
    };

int main() {

    Pessoa p1("Luiza", 21);
    Pessoa p2("Luana", 19);

    p1.apresentar();
    p2.apresentar();
    return 0;
}