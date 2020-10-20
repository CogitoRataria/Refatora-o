#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

    Vendedor(std::string _nome, double _salarioHora, double quotaMensalVendas) : Empregado(_nome, _salarioHora), quotaMensalVendas(quotaMensalVendas){}

    double quotaMensalVendas; 	  
	
	  double quotaTotalAnual() {
	    return quotaMensalVendas * 12;
    }
	
};
