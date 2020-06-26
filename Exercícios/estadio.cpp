/*
Fa�a um programa que receba a quantidade de p�blico em um est�dio e imprime na tela a mensagem correspondente:
		
		- Entre 0 e 10000 pessoas: Est�dio vazio
		- Entre 10001 e 20000 pessoas: Lota��o m�dia
		- Acima de 20001 pessoas e at� 40000: Est�dio cheio
		
		Caso o usu�rio digite um valor fora desses intervalos, mostre uma mensagem de erro.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

void verificar(int x);
int main();
void retorno();

int main(){
	
	int a;
	
	cout<<"Digite um valor inteiro: ";
	cin>>a;
	
	verificar(a);
	
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


void verificar(int x){
	
	if(x>=0 && x<=10000){
		
		cout<<"Estadio vazio\n";
		
	}else if(x>=10001 && x<=20000){
		
		cout<<"Lotacao media\n";
		
	}else if(x>=20001 && x<=40000){
		
		cout<<"Estadio lotado\n";
		
	}else{
		
		cout<<"Erro: Dados inseridos sao invalidos!\n";
			
	}
	
}
