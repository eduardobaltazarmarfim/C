//Programa que só termina quando o usuário digita a senha 123456

using namespace std;

#include <iostream>
#include <cstdlib>

int main();
void retorno();

int main(){
	
	string senha="4567";
	int vezes=0;
			
	while(senha!="123456"){
						
		if(vezes<=0){
			
			cout<<"Digite sua senha: ";
			cin>>senha;
			
		}else{
			
			cout<<"Senha invalida digite novamente: ";
			cin>>senha;
			
		}
		
		vezes++;

		
	}
	
	cout<<"Seja vem vindo!\n";
	
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

