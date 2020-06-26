using namespace std;

#include <iostream>
#include <cstdlib>

int main();
void retorno();
int letra(char x);

int main(){
	
	char a;
	
	cout<<"Digite uma letra: ";
	cin>>a;
	
	letra(a);
	
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

int letra(char x){
	
	switch(x){
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			
			cout<<"A letra digitada e uma vogal.\n";
			
			break;
			
		default:
			
			cout<<"A letra digitada e uma consoante.\n";
			
			break;
		
	}
	
	return 0;	
	
}

