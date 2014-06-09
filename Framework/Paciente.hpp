#include <string>

class Paciente
{
public:
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Nombre el paciente
	*/
	std::string nombre;
	/**
	*Apellido del paciente
	*/
	std::string apellido;
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

	Paciente(std::string nombre, std::string apellido, int edad, char sexo) 
	{
		this->nombre = nombre;
		this->apellido = apellido;
		this->edad = edad;
		this->sexo = sexo;
		puntaje = 0;
	}
	Paciente()
	{
		this->nombre = "";
		this->apellido = "";
		this->edad = 0;
		this->sexo = 'M';
		puntaje = 0;
	}

	void setNombre(std::string nombre) 
	{
		this->nombre = nombre;
	}

	void setApellido(std::string apellido) 
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
	std::string getNombre() 
	{
		return this->nombre;
	}

	std::string getApellido() 
	{
		return this->apellido;
	}

	int getEdad()
	{
		return this->edad;
	}

	char getSexo() 
	{
		return this->sexo;
	}

	int getPuntaje()
	{
		return this->puntaje;	
	}
};
