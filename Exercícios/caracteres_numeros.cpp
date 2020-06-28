/*
Faça um programa que conte o número de 1’s que aparecem em uma string digitada pelo usuário. Exemplo:
“0011001” -> 3.
*/

using namespace std;

#include <iostream>
#include <cstdlib>
#include <string.h>

int main();
void retorno();

#define max 250

int main(){
	
	char dados[max],num;
	int i,x,y=0;
	
	cout<<"Digite uma sequencia de numeros: ";
	cin>>dados;
	
	for(i=0;dados[i]!='\0';i++){
		
		++x;
	}

	cout<<"Digite um valor de pesquisa: ";
	cin>>num;
	
	for(i=0;i<x;i++){
		
		if(dados[i]==num){
						
			++y;
			
		}
		
	}
	
	cout<<"A quantidade de numeros iguais e : "<<y<<endl;
	
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
