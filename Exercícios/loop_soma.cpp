/*
Escreva um programa que soma N valores digitados pelo usuário, sendo que o usuário fornece o valor de N no começo do programa.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

void retorno();
int main();
float soma();

int main(){
	
	soma();
	
	retorno();
	
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

float soma(){
	
	char resposta='s';
	float total=0,valores;
	
	while(resposta=='S'||resposta=='s'){
		
		cout<<"Digite um valor: ";
		cin>>valores;
		
		total+=valores;
		
		cout<<"---------------------------------\n";
		cout<<"Deseja digitar um novo valor?[s/n]: ";
		cin>>resposta;
		cout<<"---------------------------------\n";
		
		
	}
	
	cout<<"A total dos valores: "<<total<<endl;
	
	return 0;
	
}
