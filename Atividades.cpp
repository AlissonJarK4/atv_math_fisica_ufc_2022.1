#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <typeinfo>
#include <sstream>
#include "Conversor.hpp"
#include "Writer.hpp"
using namespace std;

void questao4()
{
    int base = 0;
    string num;
    int result;

    base = Writer::getBase(base);

    num = Writer::getNum(num);

    result = Conversor::converterParaDecimal(base, num);

    cout << "Resultado: " << result << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

void questao5()
{
    int base = 0;
    string num;
    string arrString;

    num = Writer::getNum(num, "Insira um número decimal a ser convertido para a base desejada:");
    base = Writer::getBase(base);

    arrString = Conversor::converterParaBase(base, num);

    cout << "Resultado: "
         << arrString << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}
void questao6()
{
    int base1 = 0;
    int base2 = 0;
    string num;
    int quotient = 0;
    int decimalValue = 0;
    string result;

    num = Writer::getNum(num, "Insira um número a ser convertido para outra base numerica:");
    base1 = Writer::getBase(base1, "Insira a base numérica desse numero:");
    base2 = Writer::getBase(base2, "Insira a base numérica de destino:");

    decimalValue = Conversor::converterParaDecimal(base1, num);

    result = Conversor::converterParaBase(base2, std::to_string(decimalValue));

    cout << "Resultado:" << endl;

    cout << "O numero " << num << ", na base " << base1 << " se equivale ao numero " << result << " na base " << base2 << "."
         << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

void lista2()
{
    cout << "---------------- Questao 1 - Lista 2 ----------------" << endl
         << endl;

    string num;
    string resultBase2;
    string resultBase8;
    string resultBase16;

    num = Writer::getNum(num, "Insira um número decimal para iniciar as conversões:");
    resultBase2 = Conversor::converterParaBase(2, num);
    resultBase8 = Conversor::converterParaBase(8, num);
    resultBase16 = Conversor::converterParaBase(16, num);

    cout << "Resultado: " << endl;
    cout << "Número inicial: " << num << endl;
    cout << "Base 2: " << resultBase2 << endl;
    cout << "Base 8: " << resultBase8 << endl;
    cout << "Base 16: " << resultBase16 << endl;

    cout << "Retornando para o início do programa...\n"
         << endl;
}

int main()
{
    while (true)
    {
        int lista;

        cout << "Selecione a lista de exercicios." << endl;
        cin >> lista;
        if (lista == 2)
            lista2();
        else
        {
            cout << "---------------- Questoes - Lista 1 ----------------" << endl
                 << endl;

            int questao;

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
}