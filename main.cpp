#include <iostream>
using namespace std;

// Programa que compara las distintas formas de almacenar cadenas de caracteres

int main() {
	
	char cadena[20];
	cout<<"Introduce una cadena de caracteres"<<endl;
	
	/* Tengo tres formas de hacerlo: 
		1) Si uso cin<<cadena;, me cooge solo la primera palabra. En el momento en el que haya un espacio se me para
		2) Si uso gets(cadena); me coge la cadena entera, pero le da igual el tamaño que le haya asignado, me coge lo que necesite de memoria
		3) Si uso cin.getline(cadena,20,'\n'); me guarda lo que escribo en cadena, con el tamaño establecido y acaba cuando encuentra el salto de línea
	*/
	
	return 0;
}
