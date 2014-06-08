#include <string>
using namespace std;

class Categoria
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Nombre de la categoría
	*/
	string nombre;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
public:
	/**
	*Crea una categoría. <br>
	*<b>post: </b> Se creó una categoría con el nombre pasado por parámetro. <br>
	*@param nombre - corresponde al nombre de la categoría. nombre != NULL
	*/
	Categoria(string nombre)
	{
		this->nombre = nombre;
	}

	/**
	*
	*
	*/
	void setNombre(string nombre)
	{
		this->nombre = nombre
	}

};