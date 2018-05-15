#include <iostream>
using namespace std;
//=======================================================================================
float Promedio (int x){
	float p, acu=0;
	for(int i = 0; i < x; i++){
		cout <<"Por favor ingrese el "<< i+1 <<" valor:";   
    	cin >> p;
		acu = acu + p;
	}
	cout <<"El promedio es: " << acu/x;
}
//=======================================================================================
int main(){
	int x;
	cout <<"Cuantos numeros desea Ingresar: ";
	cin >> x;
	Promedio(x);
}
