#include <iostream>

class Copo {
    private:
    std::string tipo;
    public:
    Copo(std::string tipo) {
        this->tipo = tipo;
    }

    void encher() {
        std::cout << "O copo de " << this->tipo << " encheu de agua." << std::endl;
    }
};

int main() {
    Copo a1("Vidro");
    Copo a2("Plastico");

    a1.encher();
    a2.encher();

    return 0;
}