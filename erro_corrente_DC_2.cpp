
	// Calculo usado para quando se tem uma medida da corrente (DC) em um multímetro digital

	#include<iostream>
	#include<math.h>
	#include<stdio.h>
	
	using namespace std;
	
	int main ()
	
	{
	
		// Declarando a variável
		
		float a;
		float erro;
		
		// Pedindo o valor ao usuário
		
		cout << endl << "Insira o valor da medida: ";
		cin >> a;
		
		// Operação
		
		erro = (a*0.02) + 0.05;
		
		// Imprimindo na tela o resultado
		
		cout << endl << "Erro associado a medida = " << erro << endl << endl;
		
		return 0;
	
	}
	
	// A operação do calculo do erro associado a medida da corrente (DC) foi fornecido no manual do multímetro pelo fabricante
	// Escala 20 A
	
	
