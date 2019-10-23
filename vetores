#include <iostream>
#include <cstring>

using namespace std;
void preenche(int a[], int n);
void print(int a[], int n);
void repetido(int v[], int n);
void selectsort(int v[], int n);
int main()
{
    int n;
    cout << "digite o tamanho: ";
    cin >> n;
    if(n <= 30)
    {
        int a[n];

        preenche(a, n);
        print(a, n);
        cout << '\n';
        selectsort(a, n);
        cout << '\n';
        repetido(a, n);



    }
    return 0;
}
void print(int a[], int n)
{
    for(int i=0; i< n ; i++)
    {
        cout << a[i] << " " ;
    }
}
void preenche(int a[], int n)
{

    for(int i=0; i< n ; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> a[i];
    }
}
void selectsort(int v[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int maior = i;
        for(int j=i+1; j<n; j++)
        {
            if(v[maior] > v[j])
            {
                maior = j;
            }
        }
        int aux = v[i];
        v[i] = v[maior];
        v[maior] = aux;


    }


    for(int i=0; i< n ; i++)
    {
        cout << v[i] << " ";
    }
}
void repetido(int v[], int n)
{
    int qnt= 0;
    int cont= 0;
    for(int i=0; i<n; i= cont)
    {

        for(int j=i; j<n; j++)
        {
            if(v[i] == v[j])
            {
                qnt ++;
                cont ++;
            }
        }


            cout << " o elem" << v[i] << " repete" << qnt <<"\n";


        qnt=0;
    }
}
