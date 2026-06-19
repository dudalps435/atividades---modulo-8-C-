#include <iostream>

    class Cachorro {
    private:
        std::string nome;
        std::string raca;

    public:
        Cachorro(std::string nome, std::string raca) {
            this->nome = nome;
            this->raca = raca;
        }

        void Latir() {
            std::cout << "O cachorro "
            << this->nome << " da raca "
            << this->raca << " esta latindo!"
            << std::endl;
        }
    };
    
int main() {

    Cachorro c1("Rex", "Labrador");
    Cachorro c2("Bolt", "Pastor Alemão");

    c1.Latir();
    c2.Latir();
    return 0;
}