/*
Para testar a mira de um arco e flecha, o fabricante usa um ambiente sem vento, fechado, e com o uso de 
uma m�quina especializada, faz 100 tiros com o instrumento. O arco-e-flecha � acoplado � m�quina, que automaticamente 
alinha a mira com o alvo, a cerca de 15 metros de dist�ncia.

Para avaliar se o arco-e-flecha foi constru�do de maneira adequada, um operador conta quantas flechas foram acertadas 
no meio do alvo, e a classifica��o fica a seguinte:

- Abaixo de 90 flechas: Arco-e-flecha com defeito;
- Entre 90 e 95 flechas: Arco-e-flecha precisa de pequenos ajustes na calibra��o;
- Acima de 95: Arco-e-flecha aprovado.

Fa�a um programa em C que recebe a quantidade de flechas que acertaram o meio do alvo, e a 
mensagem correspondente � classifica��o do arco-e-flecha. 
*/

using namespace std;

#include <iostream>
#include <cstdlib>

int avaliacao(int x);
int main();
void retorno();

int main(){
	
	int flecha;
	
	cout<<"Digite a quantidade de acertos no alvo: ";
	cin>>flecha;
	
	avaliacao(flecha);
	
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

int avaliacao(int x){
	
	if(x<90){
		
		cout<<"Arco-e-flecha com defeito\n";
		
	}else if(x>=90 && x<=95){
		
		cout<<"Arco-e-flecha precisa de pequenos ajustes na calibracao\n";
		
	}else{
		
		cout<<"Arco-e-flecha aprovado\n";
	}
	
	return 0;
}

