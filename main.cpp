#include <iostream>
#include <list>

using namespace std;

int main()
{
    int numero, cont = 0;
    list<int> lista;
    list<int>::iterator it;
    lista.clear();
    while (cont < 20){
        cin >> numero;
        lista.push_front(numero);
        cont++;
    }
    cont = 0;
    for (it = lista.begin(); it != lista.end(); it++){
        cout << "N[" << cont << "] = " << *it <<endl;
        cont++;
    }
    return 0;
}
