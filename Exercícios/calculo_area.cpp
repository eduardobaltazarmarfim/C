/*
Faça um programa que recebe a altura (h) e o comprimento (l) de um retângulo e calcula sua área, dada por A = h*l. Depois imprima a mensagem na tela de acordo com:
Se h=l: "O quadrado tem área XX"
Se h diferente de l: "O retângulo tem área XX"
*/

using namespace std;

#include <iostream>
#include <cstdlib>

void retorno();
int main();
void calcular(double a,double b);

int main(){
	
	double altura,comprimento;
	
	cout<<"Digite a altura e comprimento: ";
	cin>>altura>>comprimento;
	
	calcular(altura,comprimento);
	
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

void calcular(double a,double b){
	
	double res;
	
	res=a*b;
	
	if(a==b){
		
		cout<<"O quadrado tem area "<<res<<" metros quadrados."<<endl;
		
	}else{
		
		cout<<"O retangulo tem area "<<res<<" metros quadrados."<<endl;
		
	}
	
}
