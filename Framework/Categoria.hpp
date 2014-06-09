#include <string>

class Categoria
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Nombre de la categoría
	*/
	std::string nombre;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
public:
	/**
	*Crea una categoría. <br>
	*<b>post: </b> Se creó una categoría con el nombre pasado por parámetro. <br>
	*@param nombre - corresponde al nombre de la categoría. nombre != NULL
	*/
	Categoria(std::string nombre)
	{
		this->nombre = nombre;
	}
	/**
	*
	*
	*/
	void setNombre(std::string nombre)
	{
		this->nombre = nombre;
	}

};