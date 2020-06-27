/*
Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor.
*/

using namespace std;
#include <iostream>
#include <cstdlib>

#define max 50

int main();
void retorno();


int main(){
	
	int i,x=0,num[max];
	
	for(i=0;i<max;i++){

		num[i]=(i+5*i)%(i+1);
		
	}
	
	for(i=0;i<max;i++){
			
		cout<<num[i]<<"\n";
		
	}
	
	cout<<"-------------------------------\n";
	
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

