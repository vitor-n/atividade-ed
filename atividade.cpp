#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float abs(float& fValor);

int main() {
    float fValor = -5;
    
    float fAbs = abs(fValor);

    cout << fAbs << endl;
    return 0;
}

float abs(float&     fValor) {
    if (fValor < 0) {
        return -fValor;
    }
    return fValor;
}

