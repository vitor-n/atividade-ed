#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float abs(float& fValor);
int fatorial(int iValor);
float progressaoAritmetica(float iTermoInicial, float iNumTermos, float iRazao);
int contaDigitos(int iValor);

int main() {
    float fValor = -5;
    int iValor = 4;
    int iValorzao = 52434;
    float fAbs = abs(fValor);

    cout << fAbs << endl;
    cout << fatorial(iValor) << endl;
    cout << progressaoAritmetica(1, 5, 2) << endl;
    cout << contaDigitos(iValorzao) << endl;

    return 0;
}

float abs(float& fValor) {
    if (fValor < 0) {
        return -fValor;
    }
    return fValor;
}

int fatorial(int iValor)
{   
    int iResultado = iValor;

    if (iValor < 0)
    {
        cout << "O valor não pode ser negativo" << endl;
        return iValor;
    }

    if (iValor == 0)
    {
        return 1;
    }

    while (iValor > 1)
    {
        iResultado = iResultado * (iValor - 1);
        iValor = iValor - 1;
    }

    return iResultado;
}

float progressaoAritmetica(float iTermoInicial, float iNumTermos, float iRazao) {
    return iTermoInicial + (iNumTermos - 1) * iRazao;
}

int contaDigitos(int iValor)
{   
    if (iValor < 10)
    {
        return 1;
    }

    int iContador = 0;

    while (iValor > 1)
    {
        iValor = iValor / 10;

        iContador += 1;
    }

    return iContador;
}