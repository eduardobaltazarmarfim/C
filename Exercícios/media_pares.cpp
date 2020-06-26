/*
1) Escreva um programa que captura 10 valores do usuário e calcula a média aritmética desses 10 valores.

Média aritmética = Soma dos 10 valores dividido por 10.

2) Escreva um programa que captura 10 valores do usuário e conta quantos são pares.

*/

using namespace std;

#include <iostream>
#include <cstdlib>

double notas();
int main();
void retorno();

int main(){
	
	notas();
	
	retorno();
	
	return 0;
}

void retorno(){
	
	char resp;
	
	cout<<"\nDeseja executar o programa novamente[s/n]";
	cin>> resp;
	
	if(resp=='s'||resp=='S'){
		
		system("cls");
		
		main();
		
	}else{
		
		cout<<"\nProcesso finalizado com sucesso!";
	}
	
}

double notas(){
	
	int i,x,pares=0,valores,total=0;
	double media;
		
	for(i=1,x=0;i<11;i++,x++){
		
		cout<<"Digite a "<<i<<" valor: ";
		cin>>valores;
		
		if(valores%2==0){
			
			pares++;
			
		}
		
		total+=valores;
		
	}
	
	media=total/x;
	
	cout<<"A media dos valores e "<<media<<endl;
	cout<<"A quantida de numeros pares e "<<pares<<endl;
	
	return 0;
}
