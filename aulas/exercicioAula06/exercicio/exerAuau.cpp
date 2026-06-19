#include <iostream> 

    class Gato {
    private:
        std::string nome;

    public:
        Gato(std::string nome) {
            this->nome = nome;
        }

        void miar() {
            std::cout << " Miau! " << this->nome << " está miando." << std::endl;
        }

        void comer() {
            std::cout << this->nome << " : Miauuuuu quero comer!!!" << std::endl;
        }

        void dormir() {
            std::cout << this->nome << " : sobe na cama e 'zzzz'." << std::endl;
        }
    };

int main() {

    Gato g1("Luna");
    Gato g2("Cookie");
    g1.miar();
    g2.miar();
    g1.comer();
    g2.comer();
    g1.dormir();
    g2.dormir();

    return 0;
}