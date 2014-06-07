#include <string>
using namespace std;

class Paciente
{
	string nombre;
	string apellido;
	int edad;
	char sexo;
	int puntaje;
	
public:
	Paciente(string nombre, string apellido, int edad, char sexo) 
	{
		this->nombre = nombre;
		this->apellido = apellido;
		this->edad = edad;
		this->sexo = sexo;
		puntaje = 0;
	}

	void setNombre(string nombre) 
	{
		this->nombre = nombre;
	}

	void setApellido(string apellido) 
	{
		this->apellido = apellido;
	}

	void setEdad(int edad)
	{
		this->edad = edad;
	}

	void setSexo(char sexo) 
	{
		this->sexo = sexo;
	}

	void setPuntaje(int puntaje)
	{
		this->puntaje = puntaje;	
	}
};
