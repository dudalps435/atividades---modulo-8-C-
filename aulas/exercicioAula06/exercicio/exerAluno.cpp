#include <iostream>
#include <string>

class Aluno {
    private:
        std::string nome;
        double nota1;
        double nota2;

    public:
        Aluno(std::string nome, double nota1, double nota2) {
            this->nome= nome;
            this->nota1 = nota1;
            this->nota2 = nota2;
        }

        void media() {
            double media = (this->nota1 + this->nota2) / 2;
            std::cout << "O(a) aluno(a) " << this->nome << " tem a media: " << media << std::endl;
        }

        void situacao() {
            double media = (this->nota1 + this->nota2) / 2;
            if (media >= 7) {
                std::cout << "O(a) aluno(a) " << this->nome << " esta aprovado(a)." << std::endl;
            } else {
                std::cout << "O(a) aluno(a) " << this->nome << " esta reprovado(a)." << std::endl;
            }
        }
    };

int main() {
    Aluno a1("Maria", 8.5, 7.0);
    Aluno a2("Joao", 5.0, 6.0);

    a1.media();
    a1.situacao();
    a2.media();
    a2.situacao();

    return 0;
}