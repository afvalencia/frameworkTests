#include <iostream>
#include "Neurops.hpp"
#include <vector>
#include <string>
#include <time.h>
#include <sys/time.h>
//#include <conio.h>

using namespace std;
 
/* -----MODELO-----*/
Paciente obtenerPaciente(){

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
	Paciente P = Paciente(nombre,apellido,edad,sexo);
	return P;
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
	string s1 = "numero";
	string s2 = "ubicacion";
	Item item1 = Item(1,1,s1,s2);
	v.push_back(item1);
	Item item2 = Item(2,23,s1,s2);
	v.push_back(item2);
	Item item3 = Item(3,15,s1,s2);
	v.push_back(item3);
	Item item4 = Item(4,56,s1,s2);
	v.push_back(item4);
	Item item5 = Item(5,119,s1,s2);
	v.push_back(item5);
	Item item6 = Item(6,88,s1,s2);
	v.push_back(item6);
	Item item7 = Item(7,61,s1,s2);
	v.push_back(item7);
	Item item8 = Item(8,50,s1,s2);
	v.push_back(item8);
	Item item9 = Item(9,18,s1,s2);
	v.push_back(item9);
	Item item10 = Item(10,115,s1,s2);
	v.push_back(item10);
	Item item11 = Item(11,83,s1,s2);
	v.push_back(item11);
	Item item12 = Item(12,78,s1,s2);
	v.push_back(item12);
	Item item13 = Item(13,40,s1,s2);
	v.push_back(item13);
	Item item14 = Item(14,125,s1,s2);
	v.push_back(item14);
	Item item15 = Item(15,93,s1,s2);
	v.push_back(item15);
	Item item16 = Item(16,121,s1,s2);
	v.push_back(item16);
	Item item17 = Item(17,33,s1,s2);
	v.push_back(item17);
	Item item18 = Item(18,75,s1,s2);
	v.push_back(item18);
	Item item19 = Item(19,9,s1,s2);
	v.push_back(item19);
	Item item20 = Item(20,5,s1,s2);
	v.push_back(item20);
	Item item21 = Item(21,97,s1,s2);
	v.push_back(item21);
	Item item22 = Item(22,58,s1,s2);
	v.push_back(item22);
	Item item23 = Item(23,37,s1,s2);
	v.push_back(item23);
	Item item24 = Item(24,144,s1,s2);
	v.push_back(item24);
	Item item25 = Item(25,116,s1,s2);
	v.push_back(item25);
	return v;
}

Prueba* crearPrueba(Paciente p){
	vector<Item> v2;
	v2 = llenarItems();
	Rango rango = Rango();
	Prueba* TrailMaking = new Prueba(rango,p,v2);
	return TrailMaking;
}

/*-----VISTA-----*/

int  buscarPregunta(int x, vector<Item> v){
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
                int x = buscarPregunta(cont, v3);
                v2.push_back(x);
                if (cont == ubicacion){
              		v2[j] = -1;
                }
            }
			if(cont == ubicacion and not buscar(cont,v3)){
                v2.push_back(-1);
            }			
            else{
                 v2.push_back(-2);
            }
			cont++;
		}
		v.push_back(v2);		
	}
	return v;
}

void imprimir(vector< vector<int> > v){
    int i;
	for (i = 0; i < v.size(); ++i)
	{
        int j;

        for(j = 0; j < v[i].size(); ++j)
        {
              if(v[i][j] == -2){
                   cout<<" ";
              }
              if(v[i][j] == -1){
                   cout<<"*";
              }
              if(v[i][j] != -2 and v[i][j] != -1){
                   cout<<v[i][j];  
              }        
        }
        cout<<endl;
    }
    cout<<"----------------------------------\n";
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
	Prueba* TrailMaking = crearPrueba(p);
	cout<<"En esta imagen hay varios números del 1 al 25. La tarea consiste en ir del numero 1 al 25 de uno en uno y pasando de un número a otro en orden correlativo. Esta sobre el número 1 ahora debe ir al 2 y así con todos los números. Deberá hacerlo lo más rápido posible, contra el tiempo. Si se equivoca el programa lo corregirá."<<endl;
	vector<Item> vectorItems = TrailMaking->getItems();
    int ubicacion = 1;
    bool J = true;
    vector< vector<int> > v;
    int objetivo = 1; 
	v = llenarVector();
	vector< vector<int> > v2;
	v2 = vistaVector(vectorItems,ubicacion);
	imprimir(v2);
    while(J){
        v2 = vistaVector(vectorItems,ubicacion);
	    char opc;
	    cout<<"presione una tecla\n";
	    cin.get(opc);
	    if(opc == 0){
	    	cin.get(opc);
	    }
	    switch(opc) 
		{ 
		case 97: //Flecha izquierda en ASCII. 
			ubicacion--;
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta()) == true){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}
			v2 = vistaVector(vectorItems,ubicacion);
			imprimir(v2);

		case 100: //Flecha derecha en ASCII. 
			ubicacion++;
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta())== true){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}
			v2 = vistaVector(vectorItems,ubicacion);
			 imprimir(v2);


		case 119: //Flecha hacia arriba en ASCII.
			ubicacion = ubicacion-12; 
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta()) == true){
					objetivo++;
				}
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}
			v2 = vistaVector(vectorItems,ubicacion);
			imprimir(v2);

		case 115://Flecha hacia abajo en ASCII.
			ubicacion = ubicacion+12;
			if (verificarMatriz(ubicacion, v)){
				if (comprobar(ubicacion, vectorItems, vectorItems[objetivo].getRespuesta()) == true){
					objetivo++;
				}	
			}
			else{
				cout<<"¡Hey! no puedes ir en esa dirección"<<endl;
			}
			v2 = vistaVector(vectorItems,ubicacion);
			 imprimir(v2);

		// default: printf("Esa tecla no es valida, por favor presiona alguna valida.");  
		}

		if (objetivo == 26){
			cout<<"Prueba terminada, felicitaciones\n";
			J = false;
		}
	}
}


int main(int argc, char const *argv[])
{
	struct timeval comienzo, final;
	gettimeofday(&comienzo, NULL);

    
    trailMaking();

	gettimeofday(&final, NULL);  

 	double tiemp =(final.tv_sec+(float)final.tv_usec/100000)-(comienzo.tv_sec+(float)comienzo.tv_usec/100000);
 	cout<<"Tiempo de duración de la prueba: "<<tiemp<<" seg"<<endl;
 
    return 0;
}
