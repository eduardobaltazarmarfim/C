/*
Faça um programa que receba uma string e um caracter. Em seguida, caso encontre o caracter na string,
substitua-o pelo caracter espaço (‘ ’).
*/

using namespace std;

#include <iostream>
#include <cstdlib>
#include <string.h>

#define max 250

void retorno();
int main();

int main(){
	
	char palavra[max];
	int i,x=0;
	
	cout<<"Digite uma palavra: ";
	cin>>palavra;
	
	for(i=0;palavra[i]!='\0';i++){
		
		++x;
		
	}
	
	for(i=0;i<x;i++){
		
		if(palavra[i]=='@'||palavra[i]=='#'||palavra[i]=='$'){
			
			cout<<' ';
			
		}else{
			
			cout<<palavra[i];
			
		}
		
	}
	
	cout<<endl;
	
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

