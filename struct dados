#include <iostream>
using namespace std;


struct endereco
{
    int num;
    char cep[20];
};
struct dados
{
    char nome[50];
    char cpf[20];
    endereco ender;

};

int main()
{
    int n;


    dados d1;

    cout << "Nome:" << endl;
    cin.getline(d1.nome, 50);

    cout << "cpf:" << endl;
    cin.getline(d1.cpf, 20);

    cout << "Endereco:" << endl;
    cout << "CEP:";
    cin >> d1.ender.cep;
    cout << "Numero:";
    cin >> d1.ender.num;

    cout << "Nome:" <<  d1.nome <<endl;
    cout << "cpf:" << d1.cpf << endl;
    cout << "Endereco:" << endl;
    cout <<  d1.ender.cep;
    cout <<  d1.ender.num;

    return 0;
}


