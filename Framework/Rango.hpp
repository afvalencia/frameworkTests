class Rango 
{
	//-----------------------------------------------------------------------
	//Atributos
	//-----------------------------------------------------------------------
	/**
	*Edad inferior permitida para la realización de la prueba
	*/
	int edadInferior;
	/**
	*Edad superior permitida para la realización de la prueba
	*/
	int edadSuperior;

	//-----------------------------------------------------------------------
	//Métodos
	//-----------------------------------------------------------------------	
public:
	/**
	*Crea un rango. <br>
	*<b>@post: </b> Se creó un rango con la información pasada por parámetro. <br>
	*@param rangoInferior - corresponde al rangoInferior del rango para una prueba. rangoInferior >= 0
	*@param rangoSuperior - corresponde al rangoSuperior del rango para una prueba. rangoSuperior >= 0
	*/
	Rango(int rangoInferior,int rangoSuperior) 
	{
		this->edadInferior= rangoInferior;
		this->edadSuperior= rangoSuperior;		
	}

	/**
	*Crea un rango. <br>
	*<b>@post: </b> Se creó un rango con su edadInferior y edadSuperior en 0. <br>"
	*/
	Rango()
	{
		this->edadInferior= 0;
		this->edadSuperior= 0;	
	}
	
	/**
     * Cambia la edad inferior. <br>
     * <b>post: </b> this->edadInferior == edadInferior.
     * @param edadInferior - la nueva edad inferior para la realización de la prueba. edadInferior >= 0.
     */
	void setEdadInferior(int edadInferior) 
	{
		this->edadInferior = edadInferior;
	}

	/**
     * Cambia la edad superior. <br>
     * <b>post: </b> this->edadSuperior == edadSuperior.
     * @param edadSuperior - la nueva edad superior para la realización de la prueba. edadSuperior >= 0.
     */
	void setEdadSuperior(int edadSuperior) 
	{
		this->edadSuperior = edadSuperior;
	}

    /**
     * Retorna la edadSuperior del rango de una prueba
     * @return edadSuperior
     */
	int getEdadSuperior()
	{
		return this->edadSuperior;
	}

    /**
     * Retorna la edadInferior del rango de una prueba
     * @return edadInferior
     */
	int getEdadInferior()
	{
		return this->edadInferior;
	}
};