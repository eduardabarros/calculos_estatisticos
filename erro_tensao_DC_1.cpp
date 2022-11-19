
	// Calculo usado para quando se tem uma flutuação na medida da voltagem (DC) em um multímetro digital

	#include<iostream>
	#include<math.h>
	#include<stdio.h>
	
	using namespace std;
	
	int main ()
	
	{
	
		// Declarando a variável
		
		float a;
		float b;
		float c;
		float erro;
		
		// Pedindo o valor ao usuário
		
		cout << endl << "Insira o valor da primeira medida: ";
		cin >> a;
		
		cout << endl << "Insira o valor da segunda medida: ";
		cin >> b;
		
		// Operação
		
		c = (a+b)/2;
		
		erro = (c*0.005) + 0.03;
		
		// Imprimindo na tela o resultado
		
		cout << endl << "Média das medidas = " << c << endl;
		
		cout << endl << "Erro associado a média das medidas = " << erro << endl << endl;
		
		return 0;
	
	}
	
	// A operação do calculo do erro associado a medida da tensão (DC) foi fornecido no manual do multímetro pelo fabricante
	
