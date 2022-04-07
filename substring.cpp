
#include <iostream>
#include <cstring>

using namespace std;
void print(char a[]);
bool ehsubstring(char a[], char b[]);
int main()
{
    char a[] = "coragem";
    char b[] = "ora";
    print(a);
    cout << '\n';
    print(b);
    cout << '\n';
    cout << ehsubstring(a, b);




    return 0;
}
void print(char a[])
{
    for(int i=0; i< strlen(a) ; i++)
    {
        cout << a[i];
    }
}
bool ehsubstring (char a[], char b[])
{
    int cont= 0, m=0;
    for(int i=0; i<sizeof(b); i ++)
{
        for(int j=m; j<sizeof(a); j++)
        {
            if(a[i] == b[j])
            {
                cont++;
                m=j + 1;
                break;

            }
            if(cont > 0 && b[i] != a[j] ){
                cont = 0;

            }
        }
}
    if(strlen(b) == cont)
     return true;

    else
      return false;
}
