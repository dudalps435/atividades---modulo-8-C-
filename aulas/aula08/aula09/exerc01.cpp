#include <iostream>
#include <string>

using namespace std;


class Personagem {
protected:
    string nome;
    int nivelPoder;
    string tipo;

public:
    Personagem(string n, int poder, string t) {
        nome = n;
        nivelPoder = poder;
        tipo = t;
    }


    virtual ~Personagem() {}

    int getNivelPoder() const {
        return nivelPoder;
    }

    virtual void exibirInfo() const {
        cout << "Nome: " << nome << " | Tipo: " << tipo << " | Poder: " << nivelPoder;
    }
};

class Chefe : public Personagem {
private:
    string reino; 

public:
    Chefe(string n, int poder, string t, string r) : Personagem(n, poder, t) {
        reino = r;
    }

    void exibirInfo() const override {
        Personagem::exibirInfo();
        cout << " [CHEFE DO REINO: " << reino << "]";
    }
};

struct No {
    Personagem* personagem; 
    No* esquerdo;
    No* direito;

    No(Personagem* p) {
        personagem = p;
        esquerdo = nullptr;
        direito = nullptr;
    }

    ~No() {
        delete personagem;
    }
};


No* inserir(No* raiz, Personagem* novoPersonagem) {
    if (raiz == nullptr) {
        return new No(novoPersonagem);
    }

    if (novoPersonagem->getNivelPoder() < raiz->personagem->getNivelPoder()) {
        raiz->esquerdo = inserir(raiz->esquerdo, novoPersonagem);
    }
    else {
        raiz->direito = inserir(raiz->direito, novoPersonagem);
    }

    return raiz;
}

void exibirEmOrdem(No* raiz) {
    if (raiz == nullptr) return;

    exibirEmOrdem(raiz->esquerdo);
    raiz->personagem->exibirInfo();
    cout << "\n--------------------------------------------------" << endl;
    exibirEmOrdem(raiz->direito);           
}

void liberarArvore(No* raiz) {
    if (raiz == nullptr) return;
    liberarArvore(raiz->esquerdo);
    liberarArvore(raiz->direito);
    delete raiz; 
}

int main() {
    No* floresta = nullptr;

    floresta = inserir(floresta, new Personagem("Lupi", 45, "Animal"));
    floresta = inserir(floresta, new Personagem("Mago Merlin", 90, "Mago"));
    floresta = inserir(floresta, new Chefe("Chefe Dragao", 150, "Monstro", "Montanhas de Fogo")); // Chefe 1
    floresta = inserir(floresta, new Personagem("Fada Flora", 30, "Elemental"));
    floresta = inserir(floresta, new Chefe("Rainha Elfa", 120, "Elfo", "Bosque Sagrado"));        // Chefe 2
    floresta = inserir(floresta, new Personagem("Globin Trapaceiro", 15, "Humanoide"));

    cout << "==================================================" << endl;
    cout << "      HABITANTES DA FLORESTA ENCANTADA" << endl;
    cout << "  (Ordenados do menos para o mais poderoso)" << endl;
    cout << "==================================================" << endl;
    
    exibirEmOrdem(floresta);

    liberarArvore(floresta);

    return 0;
}