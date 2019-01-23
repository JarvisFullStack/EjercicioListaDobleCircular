#include <bits/stdc++.h>
using namespace std;

class Nodo{
	public:
		string nombre;
		Nodo *siguiente;
		Nodo *anterior;
		Nodo(){
			
			siguiente = NULL;
			anterior = NULL;
		}
		
		Nodo(string nombre){
			this->nombre = nombre;
			this->siguiente = NULL;
			this->anterior = NULL;
		}
};

class Controlador{
	public:
		Nodo *primero;
		Nodo *ultimo;
		Controlador(){
			primero = NULL;
			ultimo = NULL;
		}
		void agregar(Nodo *nuevo){
			if(!primero){
				primero = ultimo = nuevo;
			}else{
				nuevo->anterior = ultimo;
				nuevo->siguiente = primero;
				primero->anterior = nuevo;
				ultimo->siguiente = nuevo;
				ultimo = nuevo;
				
			}
		}
};


int main(){
	
	
	return 0;
}
