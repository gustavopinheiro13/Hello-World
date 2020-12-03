#include <iostream>
#include <string>
#include <math.h>
#include "Hidraulica.h"
using namespace std;
using namespace hidros;
int main() {
	//cout << "Digite a soma dos pesos do tubo";
	tubo novotubo;
	double pt, dn, di, ct;
	cin >> pt;
	cin >> dn;
	cin >> di;
	cin >> ct;
	novotubo.criartubo(pt, dn, di, ct);

	cout << novotubo.obterVazao() + '\n';
	cout << novotubo.perdaCargaTubo;
	return 0;
}
