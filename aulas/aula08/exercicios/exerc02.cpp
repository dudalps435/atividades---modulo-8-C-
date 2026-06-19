#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Funcionario {
    protected:
        string nome;
        double salario;

    public:
        Funcionario(string n, double s) : nome(n), salario(s) {}

        virtual void receber() {
            cout << "Funcionario(a): " << nome << "| Salario: " << salario << endl;
        }
};

class Gerente : public Funcionario {
    private:
    double bonus;

    public:
    // recebe nome, salario base e fator de bonus
    Gerente(string n, double s, double b) : Funcionario(n, s), bonus(b) {}

    void receber() override {
        double novoSalario = salario * bonus;
        novoSalario += salario;
        cout << fixed << setprecision(2);
        cout << "O(a) gerente " << nome << " deu um bonus de "
        << bonus << " e o salario final e: " << novoSalario << endl;
    }
};

void fazerReceber(Funcionario* f) {
    f->receber();
}

int main() {
    Funcionario* f1 = new Funcionario("Luiza", 3000);
    // exemplo: salario 3000 com fator de bonus 0.2
    Gerente* g1 = new Gerente("Carlos", 3000.0, 0.2);


    fazerReceber(f1);
    fazerReceber(g1);

    delete f1;
    delete g1;

    return 0;
}