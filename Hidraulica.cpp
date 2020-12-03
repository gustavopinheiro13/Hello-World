#include "Hidraulica.h"
#include <math.h>

using namespace hidros;

void tubo::criartubo(double PT, double DN, double DI, double CT) {
	numeroTubo = 1;
	pesostrecho = PT;
	diametroNominal = DN;
	diametroInterno = DI;
	comprimento = CT;
	vazaoEstimada = (0.3f * sqrt(pesostrecho));
	tubo::perdaCarga(vazaoEstimada, diametroInterno);
	pressaoFinalTubo = perdaCargaUnitaria * comprimento + pressaoAltimetrica;
	
}

void tubo::perdaCarga(double vazaoEstimada, double diametroInterno) {
	perdaCargaUnitaria = ((8.69f * 1E6 * pow(vazaoEstimada, 1.75f)) / pow(diametroInterno, 4.75f));
};


double tubo::obterVazao()
	{
		return perdaCargaUnitaria;
		//return diametroNominal;
	}


void tubo::cargaAltimetrica(double CotaY1, double CotaY2) {
	pressaoAltimetrica = (CotaY1 - CotaY2) * 10;
}

void conexao::criarConexao(double comprimentoConexao) {
	numeroTubo = 1;
	comprimentoEquivalente = comprimentoConexao;
}
