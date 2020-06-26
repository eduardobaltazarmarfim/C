#include <iostream>
#include <cstdlib>

//Programa que captura dois valores do usuário e mostra na tela o maior valor.

using namespace std;

float soma(float a,float b);
void retorno();
int main();

int main(){
	
	float x,y,res;
	
	cout<<"Digite o primeiro valor: ";
	cin>>x;
	
	cout<<"Digite o segundo valor: ";
	cin>>y;
	
	res=soma(x,y);
	
	cout<<"O valor total da soma e "<<res<<endl;
	
	retorno();
	
	return 0;
}

void retorno(){
	
	char resp;
	
	cout<<"Deseja executar o programa novamente[s/n]";
	cin>> resp;
	
	if(resp=='s'||resp=='S'){
		
		system("cls");
		
		main();
		
	}else{
		
		cout<<"Processo finalizado com sucesso!";
	}
	
}

float soma(float a,float b){
	
	return a+b;
}
