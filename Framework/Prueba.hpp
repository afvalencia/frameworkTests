#include <vector>
#include "Item.hpp"
#include "Rango.hpp"
#include "Paciente.hpp"
#include <sstream>

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
	std::vector<Item> items;
	/**
	*Pacientes que serán sometidos a la prueba
	*/
	Paciente paciente;
	/**
	*Rango de la prueba
	*/
	Rango rango;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
public:
	Prueba(Rango rango, Paciente paciente, std::vector<Item> it )
	{		
		this->items = it;
		this->paciente = paciente;
		this->rango = rango;
		this->tiempo = 0;
	}
	void setTiempo(double tiempo)
	{
		this->tiempo = tiempo;
	}

	void setPacientes(Paciente paciente) 
	{
		this->paciente = paciente;
	}

	void setItems(std::vector<Item> items)
	{
		this->items = items;
	}

	void setRango(Rango rango) 
	{
		this->rango = rango;
	}

	std::vector<Item> getItems()
	{
		return this->items;
	}

	std::string generarReporte() 
	{
		int edad = this->paciente.edad;
		std::string edads;
		std::stringstream stream; 
		stream<<edad;
		edads=stream.str();
		int puntaje = this->paciente.puntaje;
		std::string puntajes;
		std::stringstream stream2; 
		stream2<<puntaje;
		puntajes=stream2.str();


 		return "El paciente " + this->paciente.nombre + " " + this->paciente.apellido + ", con " + edads + " obtuvo un puntaje de " + puntajes;
	}

	
	
};