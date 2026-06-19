#include <iostream>
#include <string>
using namespace std;

class Produto {
    protected:
        string nome;
        double preco;

    public:
        Produto(string n, double p) : nome(n), preco(p) {}

    virtual void mostrar() {
        cout << "Produto: " << nome << " | Preco: " << preco << endl;
    }
};

class Livro : public Produto {
    private:
        string autor;

    public:
        Livro(string n, double p, string a) : Produto(n, p), autor(a) {}

    void mostrar() override {
        cout << "Livro: " << nome << " | Preco: " << preco << " | Autor: " << autor << endl;
    }
};

class Eletronico : public Produto {
    private:
        string marca;

    public:
        Eletronico(string n, double p, string m) : Produto(n, p), marca(m) {}

    void mostrar() override {
        cout << "Eletrônico: " << nome << " | Preco: " << preco << " | Marca: " << marca << endl;
    }
};

void exibirProduto(Produto* p) {
    p->mostrar();
}

int main() {
    Produto* p1 = new Produto("Caderno", 15.99);
    Produto* p2 = new Produto("Caneta", 2.50);
    Livro* l1 = new Livro("O Alquimista", 29.90, "Paulo Coelho");
    Livro* l2 = new Livro("Dom Casmurro", 24.90, "Machado de Assis");
    Eletronico* e1 = new Eletronico("Smartphone", 1999.99, "Samsung");
    Eletronico* e2 = new Eletronico("Notebook", 3499.99, "Dell");

    exibirProduto(p1);
    exibirProduto(p2);
    exibirProduto(l1);
    exibirProduto(l2);
    exibirProduto(e1);
    exibirProduto(e2);

    delete p1;
    delete p2;
    delete l1;
    delete l2;
    delete e1;
    delete e2;
    delete e1;

    return 0;
}