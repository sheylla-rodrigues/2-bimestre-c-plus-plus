//4) Crie uma função em linguagem C++ que receba 3 números e retorne o menor valor.

#include <iostream>
using namespace std;

float menor (float n1, float n2, float n3){
	
	if(n1<=n2 && n1<=n3){
		return n1;
	} else if(n2<=n1 && n2<=n3){
		return n2;
	} else{
		return n3;
	}
	
}

int main(){
	
	
	
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float resultado = 0;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1; 
	
	cout << "\nDigite o segundo numero: ";
	cin >> n2; 
	
	cout << "\nDigite o terceiro numero: ";
	cin >> n3; 
	
	resultado = menor(n1,n2,n3);
	
	cout << "\nO menor numero é: " << resultado ;
	
	return 0;
}