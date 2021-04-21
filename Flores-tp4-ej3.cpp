/*
	Name: Flores Martin Alejandro
	Copyright:
	Author: Flores A.
	Date: 20/04/21 22:39
	Description: TP4 Ej3 obigatorio
*/
/*Realiza un programa que permita al usuario ingresar varios números  telefónicos separados por una barra ‘/’.
 Para ello utiliza un arreglo y pide los  caracteres o dígitos del número de a uno a la vez.
  Luego el usuario debe poder  consultar cualquiera de los números guardados con sólo indicar la posición.
   Por   ejemplo si el usuario ingresó: 02652-452000/113/011-4555-5555/911 y luego pide el número de la posición 3,
    el programa deberá mostrar 011-4555-5555. Nota: puedes usar un arreglo adicional para guardar las posiciones
	donde comienzan los números. */

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	char numeros[50];
	int posicion[20];
	int i=0;
	int j=0;
	char opc;
	
	do{
  cout<<"ingrese los numeros telefonicos de a uno, separados por una '/': "<<endl;
  cin>>numeros[1];
  if(numeros[i]== '/'){
		posicion[j]= i;
		cout<<"numero guardado en la posicion: "<<j<<endl;
		j++;}
		i++;
		cout<<"Desea ingresar mas numeros? y/n?: "<<endl;
		cin>>opc;
		}while(opc == 'y');

}
		
		system("pause");
		return 0;

}
