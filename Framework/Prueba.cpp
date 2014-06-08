#include <vector>
#include <Item>
#include <Rango>
#include <Paciente>
using namespace std;

class Prueba
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Tiempo que durará la realización de la prueba
	*/
	double tiempo;
	/**
	*Lista de items que componen la prueba
	*/
	vector<Item*> items;
	/**
	*Pacientes que serán sometidos a la prueba
	*/
	vector<Paciente*> pacientes;
	/**
	*Rango de la prueba
	*/
	Rango rango;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
public:
	Prueba(Rango rango)
	{
		items = new vector<Item*>();
		categorias = new vector<Categoria*>();
		pacientes = new vector<Paciente*>();
		this->rango = rango;
	}

	bool agregarPaciente(string nombre, string apellido, int edad, char sexo) 
	{
		Paciente paciente = new Paciente(nombre, apellido, edad, sexo);
		int vectorSize = pacientes.size();
		pacientes.pull_back(paciente);
		if(pacientes.size() == vectorSize + 1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	bool agregarItem(string nombre, int ancho, int alto)
	{

		Item item = new Item(nombre, ancho, alto);
		int vectorSize = items.size();
		items.pull_back(item);
		if(items.size() == vectorSize + 1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	string generarReporte(Paciente paciente) 
	{
 		return "El paciente " + paciente.nombre + " " + paciente.apellido + ", con " + paciente.edad + " obtuvo un puntaje de " + paciente.puntaje;
	}

	void setTiempo(double tiempo)
	{
		this->tiempo = tiempo;
	}

	void setPacientes(vector<Paciente*> pacientes) 
	{
		this->pacientes = pacientes;
	}

	void setItems(vector<Item*> items)
	{
		this->items = intems;
	}

	void setRango(Rango rango) 
	{
		this->rango = rango;
	}
	
};