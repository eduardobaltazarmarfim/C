//Programa que captura 5 valores do usuário e imprime na ordem inversa na tela

using namespace std;

#include <iostream>
#include <cstdlib>

int valores();
int main();
void retorno();
int inversa(int var2[5]);

int main(){
	
	valores();
	
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


int valores(){
	
	int i,var1[5],num,x=0;
	
	for(i=0;i<5;i++){
		
		cout<<"Digite o "<<++x<<" valor: ";
		cin>>num;
		
		var1[i]=num;
	}
	
	x=0;
	
	cout<<"-------------------------------------------\n";
	
	for(i=0;i<5;i++){
		
		++x;
		
		if(x==5){
			
			cout<<"["<<var1[i]<<"]";
			
		}else{
			
			cout<<"["<<var1[i]<<"],";
			
		}
		
				
	}
	
	cout<<"\n-------------------------------------------\n";
	cout<<"VALORES INVERSO\n\n";
	
	inversa(var1);
	
	return 0;
}

int inversa(int var2[5]){
	
	int i,z=0;
	
	for(i=4;i>=0;i--){
		
		++z;
		
		if(z==5){
			
			cout<<"["<<var2[i]<<"]";
			
		}else{
			
			cout<<"["<<var2[i]<<"],";
			
		}
		
	}
	
	cout<<"\n-------------------------------------------\n";
	
	return 0;
	
}


