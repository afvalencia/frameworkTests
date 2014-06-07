#include <string>
using namespace std;

class Paciente
{
	string nombre;
	int edad;
	int puntaje;
public:
	Paciente(string nombre, int edad, int puntaje) 
	{
		this->nombre = nombre;
		this->edad = edad;
		this->puntaje = puntaje;
	}

	void setNombre(string nombre) 
	{
		this->nombre = nombre;
	}

	void setEdad(int edad)
	{
		this->edad = edad;
	}

	void setPuntaje(int puntaje)
	{
		this->puntaje = puntaje;	
	}
};
