//2 ) Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e 
//retorne o valor do delta,que é dado por 'b² - 4ac'

#include <iostream>
using namespace std;

float equacao (float a, float b, float c){

    float delta = ((b*b)-(4*a*c));

       return delta;


}

int main () {

    float a, b,c, delta1;

    cout << "Insira o primeiro numero: \n";
    cin  >> a;
    cout << "Insira o primeiro numero: \n";
    cin  >> b;
    cout << "Insira o primeiro numero: \n";
    cin  >> c;

    delta1 = equacao (a,b,c);
    cout << delta1;

    return 0;

}