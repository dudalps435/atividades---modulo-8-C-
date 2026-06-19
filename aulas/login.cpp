#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    string loginCorreto = "admin";
    string senhaCorreta = "1234";

    string login, senha;
    int tentativas = 0;
    const int MAX_TENTATIVAS = 3;

    while (tentativas < MAX_TENTATIVAS) {
        try {
            cout << "\n=== SISTEMA DE LOGIN ===" << endl;

            cout << "Login: ";
            getline(cin, login);

            cout << "Senha: ";
            getline(cin, senha);

            // Validação de campos vazios
            if (login.empty() || senha.empty()) {
                throw runtime_error("Login ou senha nao podem ficar vazios.");
            }

            // Verificação das credenciais
            if (login == loginCorreto && senha == senhaCorreta) {
                cout << "\nLogin realizado com sucesso!" << endl;
                return 0;
            } else {
                tentativas++;
                cout << "\nLogin ou senha incorretos." << endl;
                cout << "Tentativas restantes: "
                     << MAX_TENTATIVAS - tentativas << endl;
            }
        }
        catch (const exception& e) {
            cout << "\nErro: " << e.what() << endl;
        }
    }

    cout << "\nAcesso bloqueado. Numero maximo de tentativas excedido." << endl;

    return 0;
}