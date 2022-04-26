#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <typeinfo>
#include <sstream>
using namespace std;

void questao4()
{
    int base = 0;
    int num = 0;
    int result = 0;
    stringstream ss;
    while (!(base > 0))
    {
        cout << "Insira uma base numérica: " << endl;
        cout << "Base: ";
        cin >> base;
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
        if (num < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }

    string numString = std::to_string(num);
    cout << "O número " << numString << " será convertido da base " << base << " para a base decimal!" << endl;

    // std::reverse(numString.begin(), numString.end());

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

    cout << "Resultado: " << result << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

void questao5()
{
    int base = 0;
    int num = 0;
    int quotient = 0;
    int result = 0;
    stringstream ss;
    while (!(num > 0))
    {
        cout << "Insira um número decimal a ser convertido para a base desejada:" << endl;
        cout << "Número: ";
        cin >> num;
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
        if (base < 0)
        {
            cout << "O número inserido é negativo, tente novamente" << endl;
            continue;
        }
    }

    string numString = std::to_string(num);
    cout << "O número " << numString << " será convertido da base decimal para a base " << base << "!" << endl;

    string arr[100];
    cout << sizeof(arr);

    cout << "Resultado: "
         << "result" << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}
void questao6()
{
    cout << "Resultado: "
         << "result" << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

int main()
{
    cout << "---------------- Questoes - Lista 1 ----------------" << endl << endl;
    
    int questao;

    while (questao != 4 || questao != 5 || questao != 6)
    {
        cout << "Selecione o numero da questao para testar o programa." << endl;
        cout << "Opçoes:" << endl;
        cout << "4" << endl;
        cout << "5" << endl;
        cout << "6" << endl;
        cin >> questao;

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