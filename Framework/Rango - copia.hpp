class Rango 
{
	
	int edadInferior;
	int edadSuperior;

public:
	Rango(int rangoInferior,int rangoSuperior) 
	{
		this->edadInferior= rangoInferior;
		this->edadSuperior= rangoSuperior;		
	}
	Rango()
	{
		this->edadInferior= 0;
		this->edadSuperior= 0;	
	}
	

	void setEdadInferior(int edadInferior) 
	{
		this->edadInferior = edadInferior;
	}

	void setEdadSuperior(int edadSuperior) 
	{
		this->edadSuperior = edadSuperior;
	}

	int getEdadSuperior()
	{
		return this->edadSuperior;
	}

	int getEdadInferior()
	{
		return this->edadInferior;
	}
};