/*
	Name: Flores Martin Alejandro
	Copyright:
	Author: Flores A.
	Date: 20/04/21 22:39
	Description: TP4 Ej3 obigatorio
*/
/*Realiza un programa que permita al usuario ingresar varios n�meros  telef�nicos separados por una barra �/�.
 Para ello utiliza un arreglo y pide los  caracteres o d�gitos del n�mero de a uno a la vez.
  Luego el usuario debe poder  consultar cualquiera de los n�meros guardados con s�lo indicar la posici�n.
   Por   ejemplo si el usuario ingres�: 02652-452000/113/011-4555-5555/911 y luego pide el n�mero de la posici�n 3,
    el programa deber� mostrar 011-4555-5555. Nota: puedes usar un arreglo adicional para guardar las posiciones
	donde comienzan los n�meros. */

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
