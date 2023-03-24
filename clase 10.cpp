#include <iostream>
using namespace std;
//metodos y funciones = ejecutan una procion de codigo N cantidad de veces segun se mande a llaman
//metodo = no retorna un tipo de dato
//funcion = retorna un tipo de dato determinado
//80 lineas de codigo en 10 lugares distintos = 800 lineas de codigo
//Se crea una ofuncion y un metodo = y lo mandan a llamar 10 veces = 80 lineas de codigo y 10 llamados a funciones

//Funcion que sume dos valores:
//metodo y envio de parametros por valor
/*void suma(int num1,int num2){
	int resultado = 0;
	num1+=1;//11
	num2+=1;//21
	resultado = num1+num2;
	cout<<resultado<<endl;
}*/
//metodo y envio de parametros por referencia
void suma(int &num1,int &num2){
	int resultado = 0;
	num1+=1;//11
	num2+=1;//21
	resultado = num1+num2;
	cout<<resultado<<endl;
}
/*int resta2(int num1,int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}
int suma3(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}*/

main(){
	int a=10, b=20;
	
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"__________________"<<endl;
	/*cout<<resta2(150,50)<<endl;
	cout<<suma3(70,20,10)<<endl;*/
		
	system("pause");
}
