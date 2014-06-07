#include <Prueba>
#include <Paciente>
using namespace std;

class Rango 
{
	double rangoInferior;
	double rangoSuperior;
	int edadInferior;
	int edadSuperior;

public:
	Rango(rangoInferior, rangoSuperior) 
	{
		this->rangoInferior = rangoInferior;
		this->rangoSuperior = rangoSuperior;
	}

	Rango(edadInferior, edadSuperior)
	{
		this->edadInferior = edadInferior;
		this->edadSuperior = edadSuperior;
	}

	bool evaluarRangoEdad(Prueba prueba, Paciente paciente) 
	{

	}

	void setRangoInferior(double rangoInferior) 
	{
		this->rangoInferior = rangoInferior;
	}

	void setRangoSuperior(double rangoSuperior) 
	{
		this->rangoSuperior = rangoSuperior;
	}

	void setEdadInferior(int edadInferior) 
	{
		this->edadInferior = edadInferior;
	}

	void setEdadSuperior(int edadSuperior) 
	{
		this->edadSuperior = edadSuperior;
	}
};