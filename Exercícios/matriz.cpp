/*
Exercício que contém uma matriz com 3 linhas e 2 colunas, sendo que o usuário deve digitar seu conteúdo, uma linha de cada vez. Depois imprime a matriz na tela.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

#define coluna 2
#define linha 3

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
	
	int matriz[linha][coluna],i,j,num;
	
	for(i=0;i<linha;i++){
		
		for(j=0;j<coluna;j++){
			
			cout<<"Digite os valores: ";
			cin>>num;
				
			matriz[i][j]=num;
			
		}
		
		cout<<endl;
		
	}
	
	for(i=0;i<linha;i++){
		
		for(j=0;j<coluna;j++){
			
			cout<<matriz[i][j]<<" ";
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
