#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Persona{
	char nombre[20];
	int edad;
}persona1, persona2;
int main(int argc, char** argv) {
	
	cout<<"Dame el nombre del wey:"<<endl;
	cin.getline(persona2.nombre,20,'\n');
	
	cout<<"Dame la edad de la persona"<<endl;
	cin>>persona2.edad;
	
	cout<<"El nombre es: "<<persona2.nombre<<endl;
	cout<<"La edad es: "<<persona2.edad<<endl;
	system("pause");
	return 0;
}
