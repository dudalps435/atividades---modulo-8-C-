#include <iostream>

class Pessoa{
    protected:
    std::string nome;

    public:
    Pessoa(std::string n) : nome(n) {}

    virtual void falar() {
        std::cout << "Ola, meu nome e " << nome << "." << std::endl;
    }
};

class Aluno : public Pessoa {
    private:
    int matricula;

    public:
    Aluno(std::string n, int m) : Pessoa(n), matricula(m) {}

    void falar() override {
        std::cout << "Aluno(a) " << nome << " (matricula: " << matricula << ") esta apredendo." << std::endl;
    }
};

class Professor : public Pessoa {
    private:
    std::string disciplina;

    public:
    Professor(std::string n, std::string d) : Pessoa(n), disciplina(d) {}

    void falar() override {
        std::cout << "Professor(a) " << nome << " esta ensinando " << disciplina << "." << std::endl;
    }
};

void fazerFalar(Pessoa* p) {
    p->falar();
}

int main() {
    Pessoa* p1 = new Pessoa("Luiza");
    Pessoa* p2 = new Professor("Carlos", "Historia");
    Pessoa* p3 = new Aluno("Maria", 12345);

    fazerFalar(p1);
    fazerFalar(p2);
    fazerFalar(p3);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}