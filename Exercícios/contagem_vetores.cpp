
/*
Coloque essa matriz no código e a use para determinar quantos valores iguais a zero existem na matriz.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

#define linha 3
#define coluna 4

void retorno();
int main();

int main(){
	
	int mat[linha][coluna] = {{0, 2, 1, 4}, {0, 0, 1, 7}, {1, 4, 1, 0}};
	int i,j,x=0,validar;
	
	cout<<"Digite um valor inteiro para pesquisa: ";
	cin>>validar;
	
	for(i=0;i<linha;i++){
		
		for(j=0;j<coluna;j++){
			
			if(mat[i][j]==validar){
				
				x++;
				
			}
		}
	}
	
	cout<<"A quantidade de zero: "<<x<<endl;
	
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
