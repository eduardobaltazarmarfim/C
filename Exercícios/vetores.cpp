/*
Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve
executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do
vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

using namespace std;

#include <iostream>
#include <cstdlib>

#define max 6

void retorno();
int main();
int soma(int num[max]);
int mostrar(int dados[max]);

int main(){
	
	int num,z;
	int valores[max];
	
	for(int i=0;i<6;i++){
		
		cout<<"Digite um valor: ";
		cin>>num;
		
		valores[i]=num;
		
	}
	
	z=0;
	
	cout<<"--------------------------------\n";
	
	for(int i=0;i<6;i++){
		
		++z;
		
		if(z==6){
			
			cout<<"["<<valores[i]<<"]";
		
		}else{
			
			cout<<"["<<valores[i]<<"],";
			
		}
				
	}
	
	cout<<"\n--------------------------------\n";
	
	soma(valores);
	
	mostrar(valores);
	
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


int soma(int num[max]){
	
	int i,x,y;
	int total=0;
	
	cout<<"Digite a quantidade de valores a ser somado. Lembrado que nao pode ser maior que 6: ";
	cin>>x;
	
	if(x<0 || x>max){
		
		cout<<"O valor digitado é maior que o valor mencionado.";
		retorno();
		
	}else{
		
		for(i=0;i<x;i++){
			
			cout<<"Escolha um valor de selecao: ";
			cin>>y;
			
			total+=num[y];
			
		}
		
		cout<<"A soma dos valores selecionado e "<<total;
		cout<<"\n-----------------------\n";
	}
	
	
	return 0;
}

int mostrar(int dados[max]){
	
	int i,y,x,z,qtde=0;
	
	cout<<"Digite a quantidade de valores a ser alterado. Lembrado que nao pode ser maior que 6: ";
	cin>>y;
	
	for(i=0;i<y;i++){
		
		cout<<"Digite o valor de index para consulta e um valor para alteracao: ";
		cin>>x>>z;
		
		dados[x]=z;
		
	}
	
	cout<<"-----------------------\n";
	
	for(i=0;i<max;i++){
		
		++qtde;
		
		if(qtde==max){
			
			cout<<"["<<dados[i]<<"]";
			
		}else{
			
			cout<<"["<<dados[i]<<"], ";
		}
						
	}
	
	cout<<"\n-----------------------\n";
		
	return 0;
}
