#include <iostream>
using namespace std;

void questao4()
{
    int base;
    cout << "Insira uma base numérica" << endl;
}

void questao5()
{
    cout << "Opçao invalida!" << endl;
}
void questao6()
{
    cout << "Opçao invalida!" << endl;
}

int main()
{
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
            cout << "Opçao invalida!" << endl << endl;
            break;
        }
    }
}