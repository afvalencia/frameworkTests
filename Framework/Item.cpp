#include <string>
#include <Categoria>
using namespace std;

class Item
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Cateogoría a la cual pertenece el item
	*/
	Categoria categoria;
	/**
	*Nombre del item
	*/
	string nombre;
	/**
	*Ancho del item
	*/
	int ancho;
	/**
	*Alto del item
	*/
	int alto;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
public:
	Item(string nombre, int ancho, int alto)
	{
		categoria = NULL;
		this->ancho = ancho;
		this->alto = alto;
	}

	void setCategoria(Categoria categoria)
	{
		this->categoria = categoria;
	}
	
	void setNombre(string nombre) 
	{
		this->nombre = nombre;
	}

	void setAncho(int ancho) 
	{
		this->ancho = ancho;
	}

	void setAlto(int alto)
	{
		this->alto = alto;
	}
};