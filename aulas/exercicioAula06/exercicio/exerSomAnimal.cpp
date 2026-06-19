#include <iostream>

class Animal {
private:
    std::string especie;
    std::string som;
public:
    Animal(std::string especie, std::string som) {
        this->especie = especie;
        this->som = som;
    }

    void emitir_som() {
        std::cout << "O(a) " << this->especie << " faz esse som: " << this->som << std::endl;
    }
};

int main() {
    Animal a1("Galinha", "Coco coco rico");
    Animal a2("Gato", "Miau e Grwwww");
    Animal a3("Pato", "Quak quak");
    Animal a4("Cachorro", "Au auuu");

    a1.emitir_som();
    a2.emitir_som();
    a3.emitir_som();
    a4.emitir_som();

    return 0;
}
