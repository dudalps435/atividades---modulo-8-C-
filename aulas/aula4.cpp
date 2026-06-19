#include <iostream>
using namespace std;

int main() {
    
    short int * pi = new short int;
    *pi = 1022;
    cout << "Valor inteiro = " << *pi << endl;
    cout << "Localizacao = " << pi << endl << endl;

    float * pd = new float;
    *pd = 123.02;
    cout << "Valor ponto-flutuante = " << *pd << endl;
    cout << "LOcalizacao = " << pd << endl << endl;

    double * pc = new double;
    *pc = 500.25;
    cout << "Valor de double = " << *pc << endl;
    cout << "Localizacao = " << pc << endl << endl;

    cout << "Tamanho de pi = " << sizeof(pi) << endl;
    cout << "Tamanho de *pi = " << sizeof(*pi) << endl;
    cout << "Tamanho de pd = " << sizeof(pd) << endl;
    cout << "Tamanho de *pd = " << sizeof(*pd) << endl;
    cout << "Tamanho de pc = " << sizeof(pc) << endl;
    cout << "Tamanho de *pc = " << sizeof(*pc) << endl;

    return 0;
}