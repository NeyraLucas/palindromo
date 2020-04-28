/*Palindromo
By: Luis
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	
	//variables
	char vectorA [20] = " ";
	char vectorB [20] = " ";
	int intermedio = 0, valor=0, i=0;
	bool aux=true;
	
	cout<<"Ingrese la palabra"<<endl;
	gets(vectorA);
	valor = strlen(vectorA);
	cout<<valor;
	//pasar el vectorA al vectorB invertido
	//corrimiento a la izq
	for(i=valor-1;i>=0;i--){
		vectorB[intermedio]=vectorA[i];
		intermedio++;
	}
	
	//condicion para saber si es palindromo o no
	
	for(i=0;i<valor-1;i++){
		if(vectorA[i]==vectorB[i]){
			aux=true;
		}else{
			aux=false;
		}
	}
	
	if(aux==true){
		cout<<"La palabra es palindromo";
	}else{
		cout<<"La palabra no es palindromo";
	}
	
	getch();
	return 0;
	
}
