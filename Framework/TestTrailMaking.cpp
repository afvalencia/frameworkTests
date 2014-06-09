#include <iostream>
#include "Neurops.hpp"
#include <vector>
#include <string>
#include <time>
#include <sys>
#include <conio.h>

using namespace std;
 
/* -----MODELO-----*/
Paciente obtenerPaciente()
{

	string nombre;
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	string apellido;
	cout<<"Ingrese su apellido: ";
	cin>>apellido;
	int edad;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	char sexo;
	cout<<"Ingrese M si es nombre y F si es mujer: ";
	cin>>sexo;
	Paciente* P = new Paciente(nombre,apellido,edad,sexo) ;
}

bool buscar(int x, vector<Item> v){
	for(auto e : v){
		if (x == e.getRespuesta()){
			return true;
		}
	}
	return false;
}

vector<Item> llenarItems(){
	vector<Item> v;
	srand(time(NULL));
	int i = 2;
	string s1 = "numero";
	string s2 = "ubicacion";
	Item item = Item(1,1,s1,s2);
	v.push_back(item);
	while (i<=25)
	{
		int x = rand()%145;
		if (buscar(x,v)){
			break;
		}
		else{
			Item item = Item(i,x,s1,s2);
			v.push_back(item);
			i++;
		}
	}
	return v;
}

Prueba crearPrueba(Paciente p){
	vector<Item> v2;
	v2 = llenarItems();
	Rango rango = Rango(0,80);
	Prueba* TrailMaking = new Prueba(rango,p,v2);
}

/*-----VISTA-----*/

int  buscarPregunta(int x){
	for(auto e : v){
		if (x == e.getRespuesta()){
			return e.getPregunta();
		}
	}
}

 
vector< vector<int> > vistaVector(vector<Item> v3, int ubicacion){
	vector< vector<int> > v;
	
	int cont = 1;
	int i;
	for (i = 0; i < 12; ++i)
	{
        int j;
        vector<int> v2;
		for (j = 0; j < 12; ++j)
		{
			if(buscar(cont,v3)){
                 int x = buscarPregunta(cont);
                 v2.push_back(x);
            }
            if(cont == ubicacion){
                    v2.push_back(-1);
            else{
                 v2.push_back(0);
            }
			cont++;
		}
		v.push_back(v2);		
	}
	return v;
}

void imprimir(vector< vector<int> > v){
    int i;
	for (i = 0; i < 12; ++i)
	{
        int j;
        for(j = 0; j < 12; ++j)
        {
              if(v[i][j] == 0){
                   cout<<" ";
              }
              if(v[i][j] == -1){
                   cout<<"*";
              else{
                   cout<<v[i][j];          
        }
        cout<<endl;
    }
} 

/*----CONTROLADOR----*/

vector< vector<int> > llenarVector(){
	vector< vector<int> > v;
	
	int cont = 1;
	int i;
	for (i = 0; i < 12; ++i)
	{
        int j;
        vector<int> v2;
		for (j = 0; j < 12; ++j)
		{
			v2.push_back(cont);
			cont++;
		}
		v.push_back(v2);
		
	}
	return v;
}

bool comprobar(int ubicacion_actual, vector<Item> v, int ubicacion_deseada){
	if(buscar(ubicacion_actual,v)){
		if (ubicacion_actual == ubicacion_deseada)
		{
			return true;
		}
		else{
            cout<<"¡Vas en dirección equivada!"<<endl;
			return false;
		}
	}

}

bool verificarMatriz(int x, vector< vector<int> > v){
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			if (x == v[i][j]){
				return true;
			}
		}
	}
	return false;
}

void trailMaking(){
	Paciente p = obtenerPaciente();
	Prueba TrailMaking = crearPrueba(p);
	vector<Item> vectorItems = TrailMaking.getItems();
    int ubicacion = 1;
    bool J = true;
    vector< vector<int> > v;
    int objetivo = 1; 
	v = llenarVector();
	vector< vector<int> > v2;
    while(J){
        v2 = vistaVector(vectorItems,ubicacion);
        imprimir(v2);
	    char opc;
	    opc = getch();
        if(opc == 0){
           opc = getch();
        }
	    switch(opc) 
		{ 
		case 75: //Flecha izquierda en ASCII. 
			ubicacion--;
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta())){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}

		case 77: //Flecha derecha en ASCII. 
			ubicacion++;
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta())){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}


		case 72: //Flecha hacia arriba en ASCII.
			ubicacion = ubicacion-12; 
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta())){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}
		case 80://Flecha hacia abajo en ASCII.
			ubicacion= ubicacion+12;
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta())){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}

		default: printf("Esa tecla no es valida, por favor presiona alguna valida.");  
		}

		if (objetivo == 26){
			J = false;
		}
	}
}


/*void imprimir(vector< vector<int> > v){
     int i;
	for (i = 0; i < 12; ++i)
	{
        int j;
		for (j = 0; j < 12; ++j)
		{
			cout<<v[i][j];
		}
		cout<<endl;
	}
}
*/

int main(int argc, char const *argv[])
{
//	struct timeval comienzo, final;
//	gettimeofday(&comienzo, NULL);

    cout<<"En esta imagen hay varios números del 1 al 25. La tarea consiste en ir del numero 1 al 25 de uno en uno y pasando de un número a otro en orden correlativo. Esta sobre el número 1 ahora debe ir al 2 y así con todos los números. Deberá hacerlo lo más rápido posible, contra el tiempo. Si se equivoca el programa lo corregirá.";
    trailMaking();
//
//	gettimeofday(&final, NULL);  

//  double tiemp =(final.tv_sec+(float)final.tv_usec)-(comienzo.tv_sec+(float)comienzo.tv_usec);
//  
	
	system("PAUSE");
    return 0;
}




