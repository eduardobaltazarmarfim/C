/*
Programa que captura 10 valores do usuário, guarda em um vetor e soma em cada
posição do vetor o valor 5. Depois, imprime o vetor na tela
*/

using namespace std;

#include <iostream>
#include <cstdlib>

void retorno();
int main();
void lista(float listagem[10]);

void lista(float listagem[10]){
	
	int i,z=0;
		
	cout<<"\n----------------------------------------\n";
	
	for(i=0;i<10;i++){
		
		++z;
		
		if(z==10){
			
			cout<<"["<<listagem[i]<<"]";
		
		}else{
			
			cout<<"["<<listagem[i]<<"], ";
			
		}
		
			
	}
	
	cout<<"\n----------------------------------------\n";
	
	z=0;
	
	for(i=0;i<10;i++){
		
		++z;
		
		if(z==10){
			
			cout<<"["<<listagem[i]+5<<"]";
		
		}else{
			
			cout<<"["<<listagem[i]+5<<"], ";
			
		}
		
				
	}
	
	cout<<"\n----------------------------------------\n";
	
}

int main(){
	
	float valores[10],num;
	int x;
	
	for(int i=0;i<10;i++){
		
		cout<<"Digite o "<<++x<<" valor: ";
		cin>>num;
		
		valores[i]=num;
		
	}
	
	lista(valores);	
	
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
