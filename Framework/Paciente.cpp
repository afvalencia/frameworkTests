#include <string>
using namespace std;

class Paciente
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Nombre el paciente
	*/
	string nombre;
	/**
	*Apellido del paciente
	*/
	string apellido;
	/**
	*Edad del paciente
	*/
	int edad;
	/**
	*Sexo del paciente
	*/
	char sexo;
	/**
	*Puntaje obtenido por el paciente en una prueba
	*/
	int puntaje;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------
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
