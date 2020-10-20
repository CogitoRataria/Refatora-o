 
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    Engenheiro(std::string _nome, double _salarioHora, int _projetos) : Empregado(_nome, _salarioHora), projetos(_projetos){}
  
	  int projetos;
	
};
