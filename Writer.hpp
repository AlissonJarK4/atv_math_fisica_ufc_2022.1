#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <typeinfo>
#include "algorithm"
#include <sstream>
using namespace std;

class Writer
{

public:
    static int getBase(int base, string message = "Insira uma base numérica: ")
    {
        while (!(base > 0))
        {
            cout << message << endl;
            cout << "Base: ";
            cin >> base;
            cout << endl;
            if (base < 0)
            {
                cout << "O número inserido é negativo, tente novamente" << endl;
                continue;
            }
        };

        return base;
    }

    static string getNum(string num, string message = "Insira um número positivo a ser convertido para decimal:")
    {
        cout << message << endl;
        cout << "Número: ";
        cin >> num;
        cout << endl;

        return num;
    }
};