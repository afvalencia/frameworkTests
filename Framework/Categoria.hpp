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
	*@param nombre - corresponde al nombre de la categoría. nombre != NULL - nombre != ""
	*/
	Categoria(std::string nombre)
	{
		this->nombre = nombre;
	}

    /**
     * Cambia el nombre de la categoría. <br>
     * <b>post: </b> this->nombre == nombre.
     * @param nombre - el nuevo nombre de la categoría.
     */
	void setNombre(std::string nombre)
	{
		this->nombre = nombre;
	}

	/**
     * Retorna el nombre de la categoría
     * @return nombre
     */
	std::string getNombre() 
	{
		return this->nombre;
	}
};