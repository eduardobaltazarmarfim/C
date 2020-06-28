//Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.

using namespace std;

#include <iostream>
#include <cstdlib>
#include <string.h>

void retorno();
int main();

int main(){
	
	char palavra[50];
	int i,x=0,y;
	
	cout<<"Digite uma palavra: ";
	cin>>palavra;
	
	for(i=0;palavra[i]!='\0';i++){
		
		++x;
			
	}
	
	cout<<"Digite a quantidade de letras, que deseja visualizar da palavra digitada: ";
	cin>>y;
	
	if(y>x||y<=0){
		
		cout<<"A quantidade de letras informada e insuficiente.\n";
		
	}else{
		
		for(i=0;i<y;i++){
			
			cout<<palavra[i];
			
		}	
		
		cout<<endl;
	}
		
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

