#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <typeinfo>
#include <sstream>
using namespace std;

int converterParaDecimal(int base, int num)
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
}

string converterParaBase(int base, int num)
{
    int quotient = 0;
    stringstream ss;

    string numString = std::to_string(num);
    cout << "O número " << numString << " será convertido da base decimal para a base " << base << "!" << endl;

    int arr[100] = {};

    quotient = num;

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
        arrString.push_back(j + '0');
    }
    arrString = arrString.substr(0, i + 1);
    std::reverse(arrString.begin(), arrString.end());

    return arrString;
}

void questao4()
{
    int base = 0;
    int num = 0;
    int result;
    while (!(base > 0))
    {
        cout << "Insira uma base numérica: " << endl;
        cout << "Base: ";
        cin >> base;
        cout << endl;
        if (base < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }
    while (!(num > 0))
    {
        cout << "Insira um número positivo a ser convertido para decimal:" << endl;
        cout << "Número: ";
        cin >> num;
        cout << endl;
        if (num < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }

    result = converterParaDecimal(base, num);

    cout << "Resultado: " << result << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

void questao5()
{
    int base = 0;
    int num = 0;
    string arrString;

    while (!(num > 0))
    {
        cout << "Insira um número decimal a ser convertido para a base desejada:" << endl;
        cout << "Número: ";
        cin >> num;
        cout << endl;
        if (num < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }
    while (!(base > 0))
    {
        cout << "Insira uma base numérica: " << endl;
        cout << "Base: ";
        cin >> base;
        cout << endl;
        if (base < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }

    arrString = converterParaBase(base, num);

    cout << "Resultado: "
         << arrString << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}
void questao6()
{
    int base1 = 0;
    int base2 = 0;
    int num = 0;
    int quotient = 0;
    int decimalValue = 0;
    string result;

    while (!(num > 0))
    {
        cout << "Insira um número a ser convertido para outra base numerica:" << endl;
        cout << "Número: ";
        cin >> num;
        cout << endl;
        if (num < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }
    while (!(base1 > 0))
    {
        cout << "Insira a base numérica desse numero:" << endl;
        cout << "Base Inicial: ";
        cin >> base1;
        cout << endl;
        if (base1 < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }
    while (!(base2 > 0))
    {
        cout << "Insira a base numérica de destino:" << endl;
        cout << "Base Final: ";
        cin >> base2;
        cout << endl;
        if (base2 < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }

        if (base1 == base2)
        {
            base2 = 0;
            cout << "Pra que rodar o programa se voce ja tem o valor na base desejada? Tente novamente com outro valor." << endl;
            continue;
        }
    }

    if (base1 == 10)
    {
        decimalValue = num;
    }
    if (base2 == 10)
    {
        result = decimalValue + "";
    }
    else
    {
        result = converterParaBase(base2, decimalValue);
    }
    cout << "Resultado:" << endl;

    cout << "O numero " << num << ", na base " << base1 << " se equivale ao numero " << result << " na base " << base2 << "."
         << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

int main()
{
    cout << "---------------- Questoes - Lista 1 ----------------" << endl
         << endl;

    int questao;

    while (questao != 4 || questao != 5 || questao != 6)
    {
        cout << "Selecione o numero da questao para testar o programa." << endl;
        cout << "Opçoes:" << endl;
        cout << "4" << endl;
        cout << "5" << endl;
        cout << "6" << endl;
        cout << "Questao: ";
        cin >> questao;
        cout << endl;

        switch (questao)
        {
        case 4:
            questao4();
            break;
        case 5:
            questao5();
            break;
        case 6:
            questao6();
            break;
        default:
            cout << "Opçao invalida!" << endl;
            break;
        }
    }
}