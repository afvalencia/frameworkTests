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
	/**
	*Crea un paciente con su puntaje en cero. <br>
	*<b>@post: </b> Se creó un paciente con la información pasada por parámetro. <br>
	*@param nombre - corresponde al nombre del paciente. nombre != NULL - nombre != ""
	*@param apellido - corresponde al apellido del paciente. apellido != NULL - apellido != ""
	*@param edad - corresponde a la edad del paciente. edad > 0
	*@param sexo - corresponde al sexo del paciente
	*/
	Paciente(std::string nombre, std::string apellido, int edad, char sexo) 
	{
		this->nombre = nombre;
		this->apellido = apellido;
		this->edad = edad;
		this->sexo = sexo;
		puntaje = 0;
	}

	/**
	*Crea un paciente sin nombre, apellido o edad, con su puntaje en cero. <br>
	*<b>@post: </b> Se creó un paciente "vacío", con sus nombres y apellidos en blanco, su edad y sexo son cero y masculino respectivamente
	*/
	Paciente()
	{
		this->nombre = "";
		this->apellido = "";
		this->edad = 0;
		this->sexo = 'M';
		puntaje = 0;
	}

    /**
     * Cambia el nombre del paciente. <br>
     * <b>post: </b> this->nombre == nombre.
     * @param nombre - el nuevo nombre del paciente. nombre != NULL.
     */
	void setNombre(std::string nombre) 
	{
		this->nombre = nombre;
	}

    /**
     * Cambia el apellido del paciente. <br>
     * <b>post: </b> this->apellido == apellido.
     * @param apellido - el nuevo apellido del paciente. apellido != NULL.
     */
	void setApellido(std::string apellido) 
	{
		this->apellido = apellido;
	}

    /**
     * Cambia la edad del paciente. <br>
     * <b>post: </b> this->edad== edad.
     * @param edad - la nueva edad del paciente. edad > 0.
     */
	void setEdad(int edad)
	{
		this->edad = edad;
	}

    /**
     * Cambia el sexo del paciente. <br>
     * <b>post: </b> this->sexo == sexo.
     * @param sexo - el nuevo sexo del paciente.
     */
	void setSexo(char sexo) 
	{
		this->sexo = sexo;
	}

    /**
     * Cambia el puntaje del paciente. <br>
     * <b>post: </b> this->puntaje == puntaje.
     * @param puntaje - el nuevo puntaje del paciente. puntaje >= 0.
     */
	void setPuntaje(int puntaje)
	{
		this->puntaje = puntaje;	
	}

    /**
     * Retorna el nombre del paciente
     * @return nombre
     */
	std::string getNombre() 
	{
		return this->nombre;
	}

    /**
     * Retorna el apellido del paciente
     * @return apellido
     */
	std::string getApellido() 
	{
		return this->apellido;
	}

    /**
     * Retorna la edad del paciente
     * @return edad
     */
	int getEdad()
	{
		return this->edad;
	}

    /**
     * Retorna el sexo del paciente
     * @return sexo
     */
	char getSexo() 
	{
		return this->sexo;
	}

    /**
     * Retorna el puntaje del empleado
     * @return puntaje
     */
	int getPuntaje()
	{
		return this->puntaje;	
	}
};
