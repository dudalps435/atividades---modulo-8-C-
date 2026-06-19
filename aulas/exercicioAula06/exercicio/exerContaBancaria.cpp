#include <iostream>

class ContaBancaria {
    private:
    std::string titular;
    double saldo;

    public:
        ContaBancaria(std::string titular, double saldo) {
            this->titular = titular;
            this->saldo = saldo;
        }

        void deposito() {
            double saldoAtual = (this->saldo + 125.25);
            std::cout << "Ola " << this->titular << " !" << std::endl;
            std::cout << "Deposito realizado com sucesso! Saldo atual e: " << saldoAtual << "." << std::endl;
        }

        void saque() {
            double saldoAtual = (this->saldo - 100);
            std::cout << "Ola " << this->titular << " !" << std::endl;
            std::cout << "Saque realizado com sucesso! Saldo atual e: " << saldoAtual << "." << std::endl;
        }
};

int main() {
    ContaBancaria t1("Luiza", 1500);
    ContaBancaria t2("Luana", 120);

    t1.deposito();
    t1.saque();

    t2.deposito();
    t2.saque();

    return 0;
}