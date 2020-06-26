//Programa que imprime os números pares de 1 até N, sendo N digitado pelo usuário.

using namespace std;

#include <iostream>
#include <cstdlib>

void retorno();
int main();
int analise(int x);

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
	
	int num;
	
	cout<<"Digite um numero inteiro para a operacao: ";
	cin>>num;
	
	analise(num);
	
	retorno();
	
	return 0;
}


int analise(int x){
	
	int i,y=0,pares=0,impares=0,valores[x];
	
	for(i=0;i<x;i++){
		
		valores[i]=++y;
		
	}
	
	y=0;
	
	for(i=0;i<x;i++){
		
		++y;
				
		if(y==x){
			
			cout<<"["<<valores[i]<<"]";
			
		}else{
			
			cout<<"["<<valores[i]<<"],";
			
		}
		
		if(valores[i]%2==0){
			
			pares++;
			
		}else{
			
			impares++;
		}
			
		
	}
	
	cout<<"\n-------------------------------------------\n";
	cout<<"A quantidade de numeros pares e "<<pares<<" e impares e "<<impares<<endl;
	cout<<endl;
	
}
