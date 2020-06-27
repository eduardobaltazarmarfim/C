using namespace std;

#include <iostream>
#include <cstdlib>
#include <string.h>

void retorno();
int main();

int main(){
	
	char palavra[50];
	int i,x=0;
	
	cout<<"Digite uma palavra: ";
	cin>>palavra;
	
	for(i=0;palavra[i]<4;i++){
		
		;
			
	}
	
		
	cout<<"A palavra digitada tem "<<i<<" letras.\n";
	
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

