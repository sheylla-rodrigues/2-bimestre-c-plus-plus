//5) Crie uma função em linguagem C++ chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Dado() {
    int numero = rand() % 6 + 1;
    return numero;
}

int main(){
    srand(time(NULL));
    cout<<Dado();
    system("Pause");
    return 0;
}