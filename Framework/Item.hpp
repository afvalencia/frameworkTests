#include <string>
#include "Categoria.hpp"

class Item
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Nombre o descripción de la pregunta
	*/
	std::string nombrePregunta;
	/**
	*Numero asociado a la pregunta
	*/
	int pregunta;
	/**
	*Nombre o descripción de la respuesta
	*/
	std::string nombreRespuesta;
	/**
	*Numero asociado a la respuesta
	*/
	int respuesta;
	
	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
public:
	Item(int pregunta, int respuesta, std::string nombreP, std::string nombreR)
	{
	
		this->pregunta = pregunta;
		this->respuesta = respuesta;
		this->nombrePregunta = nombreP;
		this->nombreRespuesta = nombreR;
	}


	void setPregunta(int Pregunta, std::string NombrePregunta) 
	{
		this->pregunta = Pregunta;
		this->nombrePregunta = NombrePregunta;
	}

	void setRespuesta(int Respuesta, std::string NombreRespuesta)
	{
		this->respuesta = Respuesta;
		this->nombreRespuesta = NombreRespuesta;
	}
	int getPregunta()
	{
		return this->pregunta;
	}
	int getRespuesta()
	{
		return this->respuesta;
	}
	std::string getNombreRespuesta()
	{
		return this->nombreRespuesta;
	}
	std::string getNombrePregunta()
	{
		return this->nombrePregunta;
	}
};