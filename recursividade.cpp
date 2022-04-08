#include <iostream>
using namespace std;

int fatorial(int a);
int intervalo(int a, int b);
int mmc(int n, int m, int aux);
int mdc(int n, int m, int aux);
int binario(int a);
int digito(int a, int cont);
int inverte (int n, int rev);
int exp(int a, int b);
bool primo(int a, int n);



int main()
{
    int n, a, cont = 0;
    cout << "Receba dois numero:" << endl;
    cin >> a >> n;

    cout << "Fatorial de "<< a << ":"<< fatorial(a) << endl;
    cout << "Soma do intervalo [a, n]:" << intervalo(a, n) << endl;
    cout << "MDC: " << mdc(a, n, cont) << endl;
    cout << "MMC: " << mmc(a, n, cont) << endl;
    cout << "binario:" << binario(a) << endl;
    cout << "qnt de digito:" << digito(a, cont) << endl;
    cout << "Potencia: " << exp(a, n) << endl;
    cout << "Primo:" << primo(a-1, a) << endl;
    cout << "Invertido:" << inverte(a, n);
    
    return 0;
}
int fatorial(int a)
{
    if(a == 1 || a == 0)
        return 1;
    return a * fatorial(a-1);
}
int intervalo(int a, int b)
{
    if(a == b)
        return b;

    return a + intervalo(a + 1, b                                          );
}
int mdc(int n, int m, int aux) {
    if (aux <= 1) {
        if (n < m)
            aux = n;
        else
            aux = m;
    }
    if (n % aux == 0 && m % aux == 0)
        return aux;
    return mdc(n, m, aux - 1);
}

int mmc(int n, int m, int aux) {
    int md;
    md = mdc(n, m, aux);
    return (n * m) / md;
}
int binario(int a)
{
    if(a == 0)
        return 0;
    return a%2 + 10*binario(a/2);

}
int digito(int a, int cont)
{
    if(a == 0)
        return 0;
    return cont + digito(a/10, cont++);
}

int inverte (int n, int rev) {
    if (n == 0)
        return rev;
    return inverte(n / 10, rev * 10 + n % 10);
}

int exp(int a, int b) {
    if (b == 1)
        return 1;
    return a * exp(a, b - 1);
}

bool primo (int a, int n)
{

    if(a==1)
        return true;

    if(n%a==0)
        return false;

    primo(a-1, n);
}
