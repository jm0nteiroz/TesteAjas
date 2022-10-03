// CO2EX06.CPP

#include <iostream>
using namespace std;

int main(void)
{
    float A, B, R;

    cout << "Informe valor para a variável <A>: "; cin >> A;
    cin.ignore(80, '\n');

    cout << "Informe o valor da variável <B>: "; cin >> B;
    cin.ignore(80, '\n');

    R = A + B;

    cout << "Resultado = " << R << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
