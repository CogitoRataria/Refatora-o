#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    Empregado(std::string _nome, double _salarioHora){
      nome = _nome;
      salarioHora = _salarioHora;

    }
    double pagamentoMes(double horasTrabalhadas);
    std::string nome;
    
    private:
    double salarioHora;
    double horasTrabalhadas;
    
};
#endif
