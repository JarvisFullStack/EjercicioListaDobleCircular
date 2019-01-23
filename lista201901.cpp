#include <bits/stdc++.h>
using namespace std;

class Nodo{
	public:
		string nombre;
		Nodo *siguiente;
		Nodo *anterior;
		Nodo(){
			nombre = NULL;
			siguiente = NULL;
			anterior = NULL;
		}
		
		Nodo(string nombre){
			this->nombre = nombre;
			this->siguiente = NULL;
			this->anterior = NULL;
		}
};


int main(){
	
	
	return 0;
}
