#include <iostream>
#include <cmath>
#include "Function.h"

using namespace std;

int main() {

    cout <<"Input text (а..я): ";
    cin.getline(str,500);
    cout << "Output: ";
    trans(str, ang, rus);
    delete [] str;
    return 0;
}
