#include <string>
#include <Categoria>
using namespace std;

class Item
{
	Categoria categoria;
	string nombre;
	int ancho;
	int alto;

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