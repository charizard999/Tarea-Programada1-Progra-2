#include "FedEX.h"
#include <iostream>

FedEX::FedEX(){
	this->peso = 0;
	this->distancia = 0;
}

double FedEX::calculoEnvio() {
	cout << "calculo de envio en FedEx:   " << endl;
	double precio=COSTO;

	if (getDistancia()> 500) {
		precio = precio + 5.00;
	}

	if (getPeso() > 4) {
		precio = precio + 3.00;
	}

	return precio;
}