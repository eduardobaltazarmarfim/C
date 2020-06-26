/*
Programa que captura três valores do usuário e mostra o maior valor na tela
*/

using namespace std;

#include <iostream>
#include <cstdlib>

int validar(float a,float b,float c);
int main();
void retorno();

int main(){
	
	float x,y,z;
	
	cout<<"Obs. Lembrando que esses valores deve ser separados por espaco!\n";
	cout<<"Digite tres valores: ";
	cin>>x>>y>>z;
	
	validar(x,y,z);
	
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

int validar(float a,float b,float c){
	
	cout<<"-----------------------\n";
	
	cout<<"["<<a<<"], ["<<b<<"], ["<<c<<"]\n";
	
	if(a>b && a>c){
		
		cout<<"O maior e "<<a<<endl;
	
	}else if(b>a && b>c){
		
		cout<<"O maior e "<<b<<endl;
		
	}else{
		
		cout<<"O maior e "<<c<<endl;
	}
	
	return 0;
}
