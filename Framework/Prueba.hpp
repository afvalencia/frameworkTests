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
	*Paciente que será sometido a la prueba
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
	/**
	*Crea una prueba. <br>
	*<b>@post: </b> Se creó una prueba con la información pasada por parámetro. <br>
	*@param rango - corresponde al rango de la prueba. rango != NULL 
	*@param paciente - corresponde al paciente al cual se le realizará la prueba. paciente != NULL
	*@param items - corresponde la lista de items que componen la prueba.
	*/
	Prueba(Rango rango, Paciente paciente, std::vector<Item> items )
	{		
		this->items = items;
		this->paciente = paciente;
		this->rango = rango;
		this->tiempo = 0;
	}

    /**
     * Cambia el tiempo de la prueba. <br>
     * <b>post: </b> this->tiempo == tiempo.
     * @param tiempo - el nuevo tiempo de realización de la prueba. tiempo >= 0.
     */	
	void setTiempo(double tiempo)
	{
		this->tiempo = tiempo;
	}

    /**
     * Cambia el paciente al que se realizará la prueba. <br>
     * <b>post: </b> this->paciente == paciente.
     * @param paciente - el nuevo paciente al cual se le realizará la prueba. prueba != NULL.
     */
	void setPacientes(Paciente paciente) 
	{
		this->paciente = paciente;
	}

    /**
     * Cambia la lista de items de la prueba. <br>
     * <b>post: </b> this->items == items.
     * @param items - la nueva lista de items de la prueba. items != NULL.
     */
	void setItems(std::vector<Item> items)
	{
		this->items = items;
	}

    /**
     * Cambia el rango de la prueba. <br>
     * <b>post: </b> this->rango == rango.
     * @param rango - el nuevo rango de la prueba. rango != NULL.
     */
	void setRango(Rango rango) 
	{
		this->rango = rango;
	}

	/**
     * Retorna la lista de items de la prueba
     * @return items
     */
	std::vector<Item> getItems()
	{
		return this->items;
	}

	/**
	*Genera un reporte de los resultados de una prueba realizada a un paciente
	*<b>pre: </b>  el paciente al cual se le realizó la prueba debe ser diferente de NULL
	*<b>post: </b> se generó un reporte indicando los datos del paciente junto con su puntaje obtenido.
	*/
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


 		return "El paciente " + this->paciente.nombre + " " + this->paciente.apellido + ", con " + edads + " obtuvo un puntaje de ";
	}

	
	
};
