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
	/**
	*Crea un item. <br>
	*<b>@post: </b> Se creó un item con la información pasada por parámetro. <br>
	*@param pregunta - corresponde al número de la pregunta. pregunta >= 0
	*@param respuesta - corresponde al número de la respuesta. respuesta >= 0
	*@param nombrePregunta - corresponde al nombre o descripción de la pregunta. nombrePregunta != NULL - nombrePregunta != ""
	*@param nombreRespuesta - corresponde al nombre o descripción de la respuesta. nombreRespuesta != NULL - nombreRespuesta != ""
	*/
	Item(int pregunta, int respuesta, std::string nombrePregunta, std::string nombreRespuesta)
	{
	
		this->pregunta = pregunta;
		this->respuesta = respuesta;
		this->nombrePregunta = nombrePregunta;
		this->nombreRespuesta = nombreRespuesta;
	}

	/**
     * Cambia una pregunta del item. <br>
     * <b>post: </b> this->pregunta == pregunta.
     * <b>post: </b> this->nombrePregunta == nombrePregunta.
     * @param pregunta - el nuevo numero de la pregunta. pregunta >= 0.
     * @param nombrePregunta - el nuevo nombre o descripción de la pregunta.
     */
	void setPregunta(int pregunta, std::string nombrePregunta) 
	{
		this->pregunta = pregunta;
		this->nombrePregunta = nombrePregunta;
	}

	/**
     * Cambia una respuesta del item. <br>
     * <b>post: </b> this->respuesta == respuesta.
     * <b>post: </b> this->nombreRespuesta == nombreRespuesta.
     * @param respuestaa - el nuevo numero de la respuesta. respuesta >= 0.
     * @param nombreRespuesta - el nuevo nombre o descripción de la respuesta-
     */
	void setRespuesta(int respuesta, std::string nombreRespuesta)
	{
		this->respuesta = respuesta;
		this->nombreRespuesta = nombreRespuesta;
	}

	/**
     * Retorna el número de la pregunta
     * @return pregunta
     */
	int getPregunta()
	{
		return this->pregunta;
	}

	/**
     * Retorna el número de la respuesta
     * @return respuesta
     */
	int getRespuesta()
	{
		return this->respuesta;
	}

	/**
     * Retorna el nombre o descripción de la respuesta
     * @return nombreRespuesta
     */
	std::string getNombreRespuesta()
	{
		return this->nombreRespuesta;
	}

	/**
     * Retorna el nombre o descripción de la pregunta
     * @return nombrePregunta
     */
	std::string getNombrePregunta()
	{
		return this->nombrePregunta;
	}
};