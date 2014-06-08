#include <vector>
#include <Item>
#include <Rango>
#include <Paciente>
using namespace std;

class Prueba
{
	double tiempo;
	vector<Item*> items;
	vector<Paciente*> pacientes;

public:
	Prueba()
	{
		items = new vector<Item*>();
		categorias = new vector<Categoria*>();
		pacientes = new vector<Paciente*>();
	}

	bool agregarPaciente(string nombre, string apellido, int edad, char sexo) 
	{
		Paciente paciente = new Paciente(nombre, apellido, edad, sexo);
		int vectorSize = pacientes.size();
		pacientes.pull_back(paciente);
		if(pacientes.size() == vectorSize + 1)
		{
			return TRUE;
		}
		else 
		{
			return FALSE;
		}
	}

	bool agregarItem(string nombre, int ancho, int alto)
	{

		Item item = new Item(nombre, ancho, alto);
		int vectorSize = items.size();
		items.pull_back(item);
		if(items.size() == vectorSize + 1)
		{
			return TRUE;
		}
		else 
		{
			return FALSE;
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
	
};