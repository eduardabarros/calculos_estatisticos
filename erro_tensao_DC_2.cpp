
	// Calculo usado para quando se a medida exata da voltagem (DC) em um multímetro digital

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
		
		erro = (a*0.005) + 0.03;
		
		// Imprimindo na tela o resultado
		
		cout << endl << "Erro associado a medida = " << erro << endl << endl;
		
		return 0;
	
	}
	
	// A operação do calculo do erro associado a medida da tensão (DC) foi fornecido no manual do multímetro pelo fabricante
