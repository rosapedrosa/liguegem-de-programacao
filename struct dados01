#include <iostream>
using namespace std;


struct endereco
{
    char rua[50];
    char cep[20];
    int num;
};
struct dados
{
    char nome[50];
    char email[20];
    char tel[20];
    endereco ender;

};

void cadastro (dados d1[], int n);
void print (dados d1[], int n);

int main()
{
    int n;
    cout <<"qnt de cadastros:";
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

        cout << "e-mail:" << endl;
        cin.getline(d1[i].email, 20);

        cout << "Telefone:" << endl;
        cin.getline(d1[i].tel, 20);

        cout << "Endereco:" << endl;
        cout << "Nome da rua:";
        cin.getline(d1[i].ender.rua, 20);
        cout << "CEP:";
        cin.getline(d1[i].ender.cep, 20);
        cout << "Numero:";
        cin >> d1[i].ender.num;
    }

}
void print (dados d1[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout <<"Dados"<<endl;
        cout << "Nome:" <<  d1[i].nome;
        cout << " Email:" << d1[i].email;
        cout << " Endereco:";
        cout << d1[i].ender.rua;
        cout <<  d1[i].ender.cep;
        cout <<  d1[i].ender.num;
    }

}
