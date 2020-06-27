using namespace std;

#include <iostream>
#include <cstdlib>

#define linha 4
#define coluna 4

void retorno();
int main();

int main(){
	
	int mat[linha][coluna] = {{0, 0, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 1, 0}};
	int i,j,x=0,r,s,validar;
	
	for(i=0;i<linha;i++){
		
		for(j=0;j<coluna;j++){
			
			cout<<mat[i][j]<<" ";	
		
		}
		
		cout<<endl;
	}
	
	cout<<"------------------------------------\n";
	
	cout<<"Digite a posicao da linha e coluna: ";
	cin>>r>>s;
	
	cout<<"O valor na posicao informada e: "<<mat[r][s]<<endl;
	
	cout<<"Digite o valor para validacao: ";
	cin>>validar;
	
	for(i=0;i<linha;i++){
		
		for(j=0;j<coluna;j++){
			
			if(mat[i][j]==validar){
				
				x++;
			}
			
		}		

	}
	
	cout<<"Existe na celulas vizinhas: "<<x<<endl;
	
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
