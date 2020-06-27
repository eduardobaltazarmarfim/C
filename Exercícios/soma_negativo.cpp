/*
Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a quantidade de n�meros
negativos e a soma dos n�meros positivos desse vetor.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

#define max 10

float analise(float pos[max]);
int main();
void retorno();

int main(){
	
	float valores[max],custo;
	int i,x=0;
	
	for(i=0;i<max;i++){
		
		++x;
		
		cout<<"Digite o "<<x<<" valor: ";
		cin>>custo;
		
		valores[i]=custo;
		
	}
	
	analise(valores);
	
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

float analise(float pos[max]){
	
	int i;
	float positivo,negativo;
	
	for(i=0;i<max;i++){
		
		if(pos[i]>0){
			
			positivo+=pos[i];
			
		}else{
			
			negativo+=pos[i];
			
		}
				
	}
	
	cout<<"O total de numeros positivos: "<<positivo;
	cout<<"\n-------------------------------\n";
	cout<<"O total de numeros negativos: "<<negativo<<endl<<endl;
	
	return 0;
}


