#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;
    cout << "Voce tem " << idade << " anos." << endl;

    double pi = 3.14159;
    cout << setprecision(pi) << endl;
    cout << fixed << setprecision(2) << pi << endl;

    double preco_item = 19.99;
    double taxa_imposto = 0.0825;

    double valor_imposto = preco_item * taxa_imposto;
    double preco_total = preco_item + valor_imposto;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Subtotal: R$ " << preco_item << "\n";
    std::cout << "Imposto:  R$ " << valor_imposto << "\n";
    std::cout << "Total:    R$ " << preco_total << "\n";
    return 0;
}