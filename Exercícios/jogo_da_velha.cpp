#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	char palavra[50],letra[1],secreta[30];
	int tam,i,chances,acertos;
	bool acerto=false;
	
	chances=6;
	tam=0;
	i=0;
	acertos=0;
	
	cout<<"Digite uma palavra: ";
	cin>> palavra;
	
	system("cls");
	
	while(palavra[i]!='\0'){
		
		i++;
		tam++;
	}
	
	for(i=0;i<30;i++){
		
		secreta[i]='-';
	}
	
	while((chances>0) &&(acertos<tam)){
		
		cout<<"Chances restantes: "<<chances<<endl;
		cout<<"Palavra secreta: ";
		
		
		for(i=0;i<tam;i++){
			
			cout<<secreta[i];
		}		
		
		cout<<endl<<endl<<"Digite uma letra: ";
		cin>>letra[0];
		
		for(i=0;i<tam;i++){
			
			if(palavra[i]==letra[0]){
				
				acerto=true;
				secreta[i]=palavra[i];
				acertos++;
			}
		}
		
		if(!acerto){
			
			chances--;
		}
		
		acerto=false;
		
		system("cls");
				
	}
	
	if(acertos==tam){
		
		cout<<"Voce ganhou!\n";
	}else{
		
		cout<<"Voce perdeu\n";
	}
	
	system("pause");	
	
		
	return 0;
}
