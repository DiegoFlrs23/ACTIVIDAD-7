#include <iostream>
using namespace std;
//structuras/struct (una forma de agrupar varias variables relacionadas en un solo lugar)
struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};
main(){
	Estudiante estudiante;
	
	int fila=0,columna = 0;
	cout<<"Cuantos estudiantes desea agregar:";
	cin>>fila;
	
	cout<<"Cuantos notas por estudiante desea agregar:";
	cin>>columna;
	
	estudiante.codigo=new int [fila];
	estudiante.nombre=new string[fila];
	estudiante.nota=new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.nota[i]=new int[columna];
	}
	cout<<"____________Ingreso de notas____________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Codigo:["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"]:";
			cin>>*(*(estudiante.nota+i)+ii);
		}
		cout<<"____________________"<<endl;
	}
	cout<<"__________Mostrar datos__________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Codigo:["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Nota["<<ii<<"]:"<<*(*(estudiante.nota+i)+ii)<<endl;
		}
		cout<<"____________________"<<endl;
	}
		
	for (int i=0;i<fila;i++){
		delete[] estudiante.nota[i];
	}
	delete[]estudiante.codigo;
	delete[]estudiante.nombre;
	delete[]estudiante.nota;
	
	/*for (int i=0;i<4;i++){
		cout<<"_____________"<<endl;
		cout<<"Ingrese codigo:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese nombre completo:";
		getline(cin,estudiante.nombre[i]);
		cout<<"Ingrese nota:";
		cin>>estudiante.nota[i];
	}
	
	for (int i=0;i<4;i++){
		cout<<"_____________"<<endl;
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre: "<<estudiante.nombre[i]<<endl;
		cout<<"Nota: "<<estudiante.nota[i]<<endl;
	}*/
	
	
	
	
	
	
	system("pause");
}
