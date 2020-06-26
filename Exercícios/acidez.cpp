/*
Programa que recebe a acidez de um azeite e mostra na tela sua classificação de acordo com:

	- acidez menor que 0.5%: azeite extra virgem
	- acidez entre 0.5% e 1%: azeite virgem.
	- acidez maior que 1%: óleo comum.*/
	
	
using namespace std;

#include <iostream>
#include <cstdlib>

int main();
void retorno();
int azeite(double x);

int main(){
	
	double acidez;
	
	cout<<"Digite acidez do azeite para avaliacao: ";
	cin>>acidez;
	
	azeite(acidez);
	
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

int azeite(double x){
			
	if(x<0.5){
		
		cout<<"azeite extra virgem\n";
		
	}else if(x>=0.5 && x<=1){
		
		cout<<"azeite virgem\n";
		
	}else{
		
		cout<<"Oleo comum\n";
		
	}
	
	return 0;
}
