//Somar dois valor digitado pelo usuário e mostre na tela.

#include <iostream>
#include <cstdlib>

using namespace std;


float soma(float a,float b);
int main();

int main(){
	
	system("cls");
	
	float x,y,res;
	char resp;
	
	cout<<"Digite um valor: ";
	cin>>x;
	
	cout<<"Digite um valor: ";
	cin>>y;
	
	res=soma(x,y);
	
	cout<<"A soma de "<<x<<" e "<<y<<" e igual "<< res<<endl;
	
	cout<<"Deseja executar o programa novamente?[s/n] ";
	cin>>resp;
	
	if(resp=='s'|| resp=='S'){
		
		main();
		
	}else{
		
		cout<<"\nProcesso finalizado com sucesso!";
	}

}

float soma(float a,float b){
	
	return a+b;
}
