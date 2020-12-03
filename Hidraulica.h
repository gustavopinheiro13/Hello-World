#pragma once
#include <math.h>

namespace hidros {
	class tubo
	{
	public:
		int numeroTubo;
		double pesostrecho;
		double comprimento;
		double diametroNominal;
		double diametroInterno;
		double pressaoAltimetrica;
		double perdaCargaTubo;
		double pressaoFinalTubo;

	private:
		double vazaoEstimada;
		double perdaCargaUnitaria;
		void cargaAltimetrica(double CotaY1, double CotaY2);
		void perdaCarga(double vazaoEstimada, double diametroInterno);

	public:
		void criartubo(double pesotubo, double diametroNominal, double diametroInterno, double comprimentoTubo);
		double obterVazao();
	};

	class conexao {
	private:
		int numeroTubo;
	public:
		double comprimentoEquivalente;
		void criarConexao(double comprimentoConexao);

	};

}