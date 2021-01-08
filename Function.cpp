#include <iostream>
using namespace std;


void trans(const char *str, const char *ang, const char *rus) {
    short i=0, k, n;
    bool Check;

    while (str[i] != '\0'){
        if (str[i] == ' '){
            cout << ' ';
            i += 1;
        } else {
            Check = true;
            k = 0;
            n = 0;
            while ((Check == true) && (rus[k] != '.' )) {
                if ((str[i] == rus[k]) && (str[i+1] == rus[k+1])) {
                    cout << ang[n];
                    Check = false;
                    if (rus[k+2] == '*') {cout << ang[n+1];}}
                if (rus[k+2] == '*')
                {k +=3;
                    n +=2;
                }
                else {
                    k +=2;
                    n ++;}
            }
            i +=2;}
    }
}
