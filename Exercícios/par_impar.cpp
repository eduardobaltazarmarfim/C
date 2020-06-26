/*
Programa que captura um valor inteiro do usuário e imprime na tela se é par ou ímpar
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main();
void retorno();
void validar(int a);

int main(){
		
	int x;
	
	cout<<"Digite um numero inteiro: ";
	cin>>x;
	
	validar(x);
	
	retorno();
	
	return 0;
	
}

void retorno(){
	
	char resp;
	
	cout<<"Deseja executar o programa novamente[s/n]";
	cin>> resp;
	
	if(resp=='s'||resp=='S'){
		
		system("cls");
		
		main();
		
	}else{
		
		cout<<"Processo finalizado com sucesso!";
	}
	
}

void validar(int a){
	
	int res;
	
	res=a%2;
	
	switch(res){
		
		case 0:
			
			cout<<"Numero digitado e par.\n";
			
			break;
			
		case 1:
			
			cout<<"Número digitado e impar.\n";
			
			break;
	}
	
}
