
#include <iostream> 
#include <string> 
#include <vector>
#include "Neurops.hpp"

void mostrarReglasB()
{
	std::cout<<"Estas son las reglas o instrucciones de la prueba,"<<std::endl<< "aparecerán una serie de números, y debe responder con el simbolo correspondiente,"<<std::endl<<"aquí estan los simbolos de cada número :"<<std::endl;
	std::cout<<"----------------------------------------------------------------"<<std::endl;
	std::cout<<"        Número        "<<"         Simbolo        "<<std::endl;
	std::cout<<"           1          "<<"            +           "<<std::endl;
	std::cout<<"           2          "<<"            -           "<<std::endl;
	std::cout<<"           3          "<<"            =           "<<std::endl;
	std::cout<<"           4          "<<"            $           "<<std::endl;
	std::cout<<"           5          "<<"            #           "<<std::endl;
	std::cout<<"           6          "<<"            /           "<<std::endl;
	std::cout<<"           7          "<<"            @           "<<std::endl;
	std::cout<<"----------------------------------------------------------------"<<std::endl;
}

std::vector<Item> crearItems()
{
	std::vector<Item> items;
	Item I1{1,4,"Pregunta 1","$"};
	items.push_back(I1);
	Item I2{2,5,"Pregunta 2","#"};
	items.push_back(I2);
	Item I3{3,1,"Pregunta 3","+"};
	items.push_back(I3);
	Item I4{4,3,"Pregunta 4","="};
	items.push_back(I4);
	Item I5{5,5,"Pregunta 5","#"};
	items.push_back(I5);
	Item I6{6,1,"Pregunta 6","+"};
	items.push_back(I6);
	Item I7{7,1,"Pregunta 7","+"};
	items.push_back(I7);
	Item I8{8,7,"Pregunta 8","@"};
	items.push_back(I8);
	Item I9{9,6,"Pregunta 9","/"};
	items.push_back(I9);
	Item I10{10,4,"Pregunta 10","$"};
	items.push_back(I10);
	Item I11{11,1,"Pregunta 11","+"};
	items.push_back(I11);
	Item I12{12,5,"Pregunta 12","#"};
	items.push_back(I12);
	Item I13{13,1,"Pregunta 13","+"};
	items.push_back(I13);
	Item I14{14,3,"Pregunta 14","="};
	items.push_back(I14);
	Item I15{15,5,"Pregunta 15","#"};
	items.push_back(I15);
	Item I16{16,4,"Pregunta 16","$"};
	items.push_back(I16);
	Item I17={17,7,"Pregunta 17","@"};
	items.push_back(I17);
	Item I18={18,4,"Pregunta 18","$"};
	items.push_back(I18);
	Item I19={19,7,"Pregunta 19","@"};
	items.push_back(I19);
	Item I20={20,2,"Pregunta 20","-"};
	items.push_back(I20);
	return items;
}

Paciente obtenerPaciente()
{	
	std::string nombre;
	std::cout<<"Ingrese su nombre: ";
	std::cin>>nombre;
	std::string apellido;
	std::cout<<"Ingrese su apellido: ";
	std::cin>>apellido;
	int edad;
	std::cout<<"Ingrese su edad: ";
	std::cin>>edad;
	char sexo;
	std::cout<<"Ingrese M si es nombre y F si es mujer: ";
	std::cin>>sexo;
	Paciente P(nombre,apellido,edad,sexo);
	return P;
}

Prueba generarPrueba(Paciente P)
{
	int edad=P.getEdad();
	Rango ran{};
	
	if(edad < 8 && edad > 5)
	{
		ran.setEdadInferior(6);
		ran.setEdadSuperior(7);
	}
	else
		if(edad < 17 && edad > 7)
		{
			ran.setEdadInferior(8);
			ran.setEdadSuperior(16);
			mostrarReglasB();
		}
	else
		std::cout<<"La edad esta mal!";
	Prueba testclaves(ran,P,crearItems());
	testclaves.setTiempo(120);
	
	return testclaves;
}








int PreguntarPrueba(Item I)
{
	std::cout<<I.getNombrePregunta()<<std::endl;
	std::cout<<I.getRespuesta()<<std::endl;
	std::string R;
	std::cin>>R;
	if(R==I.getNombreRespuesta())
		return 1;
	else
		return 0;
}

void PreguntarPractica(Item I)
{
	std::cout<<I.getNombrePregunta()<<std::endl;
	std::cout<<I.getRespuesta()<<std::endl;
	std::string R;
	std::cin>>R;
	if(R==I.getNombreRespuesta())
		std::cout<<"Correcto!"<<std::endl;
	else
		std::cout<<"Mal!"<<std::endl;
}

void comenzarPractica(std::vector<Item> items)
{
	std::cout<<"Esta es una practica que te permitirá conocer el funcionamiento de la prueba, en esta se te dira si te equivocaste o no, en la prueba real no."<<std::endl;
	std::cout<<"Comienza..... YA!"<<std::endl;
	PreguntarPractica(items[0]);
	PreguntarPractica(items[1]);
	PreguntarPractica(items[2]);
	std::cout<<"Es suficiente, ya debes saber como funciona el asunto, ahora vamos a la prueba"<<std::endl;
}



int comenzarPrueba()
{
	Paciente ActualPaciente=obtenerPaciente();
	Prueba ActualPrueba=generarPrueba(ActualPaciente);
	comenzarPractica(ActualPrueba.getItems());
	int puntos = 0;
	std::string h;
	std::cout<<"¿Estas listo para comenzar?, escribe comenzar y presiona enter para hacerlo"<<std::endl;
	std::cin>>h;
	for(auto e:ActualPrueba.getItems())
		puntos=puntos+PreguntarPrueba(e);
	ActualPaciente.setPuntaje(puntos);
	std::cout<<ActualPrueba.generarReporte()<<puntos<<" De 21 posibles"<<std::endl;
	

}




int main(int argc, char const *argv[])
{
	comenzarPrueba();
	return 0;
}

