#include <vector>
#include <Item>
#include <Categoria>
using namespace std;

class Prueba
{
	vector<Item*> items;
	vector<Categoria*> categorias;
public:
	Prueba()
	{
		items = new vector<Item*>();
		categorias = new categorias<Categoria*>();
	}
	
};