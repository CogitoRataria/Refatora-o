#include<string>
#include"Empregado.hpp"
#include"Engenheiro.cpp"

#define HORAS_PADRAO 8

//Cálculo de hora extra (+50% se horasTrabalhadas > HORA_EXTRA)
double Empregado::pagamentoMes(double horasTrabalhadas){

  if (horasTrabalhadas > HORAS_PADRAO) {
      double horaExtra = (horasTrabalhadas - HORAS_PADRAO);
      horasTrabalhadas += (horaExtra / 2);

  }
	return (horasTrabalhadas * salarioHora); 
}
// A variável "horasTrabalhadas" e "salariohora" estaam na classe Empregado, e como private:
// objetivo da modificação -> tornar o valor do pagamento/mes segura
