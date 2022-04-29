#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <typeinfo>
#include <sstream>
using namespace std;

class Conversor
{

public:
    /* static int converterParaDecimal(int base, int num)
    {

        int result = 0;
        stringstream ss;

        string numString = std::to_string(num);
        cout << "O número " << numString << " será convertido da base " << base << " para a base decimal!" << endl;

        std::reverse(numString.begin(), numString.end());

        string length = to_string(numString.length());

        for (unsigned int i = stoi(length); i > 0; i--)
        {
            int intValue;
            char numStringChar = numString.at(i - 1);

            intValue = numStringChar - '0';

            int sum = intValue * pow(base, i - 1);

            if (i - 1 > 0)
            {
                cout << intValue << " x " << base << "^" << i - 1 << " = " << sum << endl;
            }
            else
            {
                cout << intValue << " x " << base << "^" << i - 1 << " = " << sum << " + " << endl;
            }

            result += sum;
        }

        return result;
    } */

    static int converterParaDecimal(int base, string num)
    {

        int result = 0;
        stringstream ss;

        cout << "O número " << num << " será convertido da base " << base << " para a base decimal!" << endl;

        std::reverse(num.begin(), num.end());

        string length = to_string(num.length());

        for (unsigned int i = stoi(length); i > 0; i--)
        {
            int intValue;
            char numStringChar = num.at(i - 1);

            if (numStringChar == 'A')
                intValue = 10;
            else if (numStringChar == 'B')
                intValue = 11;
            else if (numStringChar == 'C')
                intValue = 12;
            else if (numStringChar == 'D')
                intValue = 13;
            else if (numStringChar == 'E')
                intValue = 14;
            else if (numStringChar == 'F')
                intValue = 15;
            else
                intValue = numStringChar - '0';

            int sum = intValue * pow(base, i - 1);

            if (i - 1 > 0)
            {
                cout << intValue << " x " << base << "^" << i - 1 << " = " << sum << endl;
            }
            else
            {
                cout << intValue << " x " << base << "^" << i - 1 << " = " << sum << " + " << endl;
            }

            result += sum;
        }

        cout << endl;
        return result;
    }

    static string converterParaBase(int base, string num)
    {
        int quotient = 0;
        stringstream ss;

        cout << "O número " << num << " será convertido da base decimal para a base " << base << "!" << endl;

        int arr[100] = {};

        quotient = stoi(num);

        int i = 0;
        while (quotient >= base)
        {
            arr[i] = quotient % base;
            cout << quotient << " / " << base << " = " << quotient / base << " - Resto: " << arr[i] << endl;
            quotient = quotient / base;
            i++;
        }
        cout << "-----> Quociente final: " << quotient << endl;

        arr[i] = quotient;
        string arrString;
        for (int j : arr)
        {
            if (j == 10)
                arrString.push_back('A');
            else if (j == 11)
                arrString.push_back('B');
            else if (j == 12)
                arrString.push_back('C');
            else if (j == 13)
                arrString.push_back('D');
            else if (j == 14)
                arrString.push_back('E');
            else if (j == 15)
                arrString.push_back('F');
            else
                arrString.push_back(j + '0');
        }
        arrString = arrString.substr(0, i + 1);
        std::reverse(arrString.begin(), arrString.end());

        cout << endl;
        return arrString;
    }
};