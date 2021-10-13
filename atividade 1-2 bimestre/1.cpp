//1) Crie uma função que receba um valor e informe se ele é positivo ou não.

#include <iostream>
using namespace std;


int parOuImpar (int numero){
	
	if (numero % 2 == 0){
		return 1;
	}
	return 0;
}

int main(){
	
	int n = 0;
	
	cout << "Digite um numero: ";
	cin >> n;
	
	if(parOuImpar(n)){
		cout << "\nO numero: " << n << " é par" ;
	} else{
		cout << "\nO numero: " << n << " é impar" ;
	}
	
	return 0;
}