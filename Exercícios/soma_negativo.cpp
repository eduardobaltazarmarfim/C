/*
Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a quantidade de n�meros
negativos e a soma dos n�meros positivos desse vetor.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

int main(){
	
	return 0;
}

void retorno(){
	
	char resp;
	
	cout<<"Deseja executar o programa novamente?[s/n]";
	cin>>resp;
	
	if(resp=='s'|| resp=='S'){
		
		system("cls");
		
		main();
		
	}else{
		
		
		cout<<"\nProcesso finalizado com sucesso!";
		
	}
	
}
