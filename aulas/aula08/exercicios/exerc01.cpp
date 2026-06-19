#include <iostream>
#include <string>

using namespace std;

class Veiculo {
protected:
    string marca;

public:
    Veiculo(string m) : marca(m) {}

    virtual void apresentar() {
        cout << "Veiculo da marca: " << marca << endl;
    }
};

class Carro : public Veiculo {
    private:
    string modelo;

    public:
    Carro(string m, string mod) : Veiculo(m), modelo(mod) {}

    void apresentar() override {
        cout << "Veiculo da marca: " << marca << ", modelo: " << modelo << endl;
    }
};

void fazerApresentar(Veiculo* v) {
    v->apresentar();
}

int main() {
    Veiculo* v1 = new Veiculo("Toyota");
    Veiculo* v2 = new Carro("Honda", "Civic");

    fazerApresentar(v1);
    fazerApresentar(v2);

    return 0;
}