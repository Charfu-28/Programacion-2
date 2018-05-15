/*Leer 10 enteros, almacenarlos en un vector y determinar en qué posición del vector está el mayor número leído.*/
# include <iostream>
using namespace std;
main()
{
	int v[4], i, base=0, pos=0;
	for(i=0;i<=4;i++){
		cout<<"ingrese el valor del numero "<<i+1<<" : ";
		cin>>v[i];
	}

	for(i=0;i<=4;i++){
		if(v[i] > base){
			base = v[i];
			pos = i;
		}
    }	
	cout <<"El numero mayor esta en la posicon : "  <<pos<<endl;
    system("pause");
}
