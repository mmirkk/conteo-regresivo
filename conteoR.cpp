#include <iostream>

using namespace std;

int main(){

    int valor = 0;

    cout << "Ingrese un valor para la cuenta regresiva: ";
    cin >> valor;

    int i=valor;

    cout << "Cuenta regresiva: " << endl;

    for(int i=valor;i>=0;i--){
        cout << i << endl;
    }

return 0;
}
