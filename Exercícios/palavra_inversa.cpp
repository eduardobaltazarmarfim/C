//Faça um programa que receba uma palavra e a imprima de trás-para-frente.

using namespace std;

#include <iostream>
#include <cstdlib>
#include <string.h>

#define max 250

int main();
void retorno();

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

int main(){
	
	char palavra[max];
	int i,x=0;
	
	cout<<"Digite uma palavra: ";
	cin>>palavra;
	
	for(i=0;palavra[i]!='\0';i++){
		
		++x;
		
	}
	
	x-=1;
	
	for(i=x;i>=0;i--){
		
		cout<<palavra[i];
		
	}
	
	cout<<endl;
	
	retorno();
	
	return 0;
}
