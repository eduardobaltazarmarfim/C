/*
Escreva um programa que o usuário digita a temperatura do ambiente e sua umidade. Lidos os dados, as mensagens a serem impressas variam de acordo com o seguinte:

Temperatura:
Entre 0°C e 10°C – Muito Frio
Entre 10°C e 15°C – Frio
Entre 15°C e 22°C – Ameno
Entre 22°C e 30°C – Quente
Acima de 30°C – Muito Quente

Umidade:
Abaixo de 30% - Umidade baixa 
Entre 30 e 60% - Umidade média
Acima de 60% - Umidade alta

Assim, se o usuário digitar 12 de temperatura e 45 de umidade, a seguinte mensagem deve ser impressa:
“Frio com Umidade média”.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

int temperatura(int a,int b);
int main();
void retorno();

int main(){
	
	int temp,umidade;
	
	cout<<"Digite a temperatura e umidade: ";
	cin>>temp>>umidade;
	
	temperatura(temp,umidade);
	
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

int temperatura(int a,int b){
	
	string tex1,tex2;
	
	//Temperatura
	
	if(a>=0 && a<10){
		
		tex1="Muito frio";
		
	}else if(a>=10 && a<15){
		
		tex1="Frio";
		
	}else if(a>=15 && a<22){
		
		tex1="Ameno";
				
	}else if(a>=22 && a<=30){
		
		tex1="Quente";
		
	}else{
		
		tex1="Muito Quente";
		
	}
	
	//Umidade
	
	if(b<30){
		
		tex2="Umidade baixa";
		
	}else if(b>=30 && b<=60){
		
		tex2="Umidade media";
		
	}else{
		
		tex2="Umidade alta";
	}
	
	cout<<tex1<<" com "<<tex2<<"."<<endl;
	
	return 0;
}
