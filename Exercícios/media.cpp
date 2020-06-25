#include <iostream>
#include <cstdlib>

/*
Programa que captura as notas e verifique se ele está aprovado/recuperação/reprovado.
*/

using namespace std;

int main();
float media(int x);
void retorno();

int main(){
	
	system("cls");
	
	int qtde;
	
	cout<<"Digite a quantidade de notas a ser avaliado: ";
	cin>>qtde;
	
	if(qtde<=1||qtde>4){
		
		cout<<"A quantidade para validacao e inferior ou superior a 4 notas!\n";
		
		retorno();
		
	}else{
		
		media(qtde);
		
		retorno();
	}
	
	return 0;
}

float media(int x){
	
	int i;
	float notas=0,val,med;
	
	for(i=1;i<x+1;i++){
		
		cout<<"Digite a "<<i<<" nota: ";
		cin>>val;
		
		notas+=val;
		
	}
	
	med=notas/x;
	
	if(med>=7){
		
		cout<<"Sua media foi "<<med<<" voce foi aprovado.\n";
		
	}else if(med>=4 && med<7){
		
		cout<<"Sua media foi "<<med<<" voce ficou de recuperacao.\n";
		
	}else{
		
		cout<<"Sua media foi "<<med<<" voce foi reprovado.\n";
	}
	
	return 0;
}

void retorno(){
	
	char resp;
	
	cout<<"Dejesa executar o programa novamente?[s/n]: ";
	cin>>resp;
	
	if(resp=='s'||resp=='S'){
		
		main();
	}else{
		
		cout<<"Processo finalizado com sucesso!";
	}
}




