#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float abs(float& fValor);
int fatorial(int iValor);
float progressaoAritmetica(float iTermoInicial, float iNumTermos, float iRazao);

int main() {
    float fValor = -5;
    int iValor = 3;

    float fAbs = abs(fValor);

    cout << fAbs << endl;
    cout << fatorial(iValor) << endl;

    cout << progressaoAritmetica(1, 5, 2) << endl;

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
    if (iValor < 0)
    {
        cout << "O valor não pode ser negativo" << endl;
        return iValor;
    }

    if (iValor == 0)
    {
        return 1;
    }

    return iValor * fatorial(iValor - 1);
}

float progressaoAritmetica(float iTermoInicial, float iNumTermos, float iRazao) {
    return iTermoInicial + (iNumTermos - 1) * iRazao;
}

