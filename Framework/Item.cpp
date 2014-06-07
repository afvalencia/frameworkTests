#include <string>
#include <Categoria>
using namespace std;

class Item
{
	Categoria categoria;
public:
	Item(Categoria categoria)
	{
		this->categoria = categoria;
	}

	void setCategoria(Categoria categoria)
	{
		this->categoria = categoria;
	}
	
};