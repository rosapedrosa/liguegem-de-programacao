#include <iostream>
using namespace std;


struct dataNas
{
    int dia;
    int mes;
    int ano;

};
struct dados
{
    char nome[50];
    float altura;
    dataNas data;

};

void cadastro (dados d1[], int n);
void print (dados d1[], int n);

int main()
{
    int n;
    cout << "qnt de dados:" << endl;
    cin >> n;
    dados d1[n];

    cadastro(d1, n);
    print(d1, n);

    return 0;
}

void cadastro (dados d1[], int n)
{

    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout << "Nome:" << endl;
        cin.getline(d1[i].nome, 50);

        cout << "Altura:" << endl;
        cin >> d1[i].altura;

        cout << "Data de Nascimento" << endl;
        cout << "dia:";
        cin >> d1[i].data.dia;
        cout << "Mes:";
        cin >> d1[i].data.mes;
        cout << "Ano:";
        cin >> d1[i].data.ano;
    }
}
void print (dados d1[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Dados:" << endl;
        cout << "Nome:" << d1[i].nome;
        cout << " Altura:" << d1[i].altura;
        cout << " Data de Nascimento:";
        cout <<  d1[i].data.dia << "/" << d1[i].data.mes << "/" << d1[i].data.ano << endl;
    }

}

