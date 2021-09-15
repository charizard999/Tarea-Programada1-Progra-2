#include "Servicio_Postal.h"

Servicio_Postal::Servicio_Postal(){
	this->peso = 0;
	this->distancia = 0;
	this->clase = 0;
}

void Servicio_Postal::setClase(int clase) {
	this->clase = clase;
}

int Servicio_Postal::getClase() {
	return this->clase;
}

double Servicio_Postal::calculoEnvio() {
	if (peso >= 1 && peso <= 3) {
		if (clase == 1) {
			costo = distancia * 0.195;
		}
		else if (clase == 2) {
			costo = distancia * 0.0195;
		}
		else {
			costo = distancia * 0.0150;
		}
	}
	else if (peso >= 4 && peso <= 8) {
		if (clase == 1) {
			costo = distancia * 0.450;
		}
		else if (clase == 2) {
			costo = distancia * 0.0450;
		}
		else {
			costo = distancia * 0.0160;
		}
	}
	else
	{
		if (clase == 1) {
			costo = distancia * 0.500;
		}
		else if (clase == 2) {
			costo = distancia * 0.0500;
		}
		else {
			costo = distancia * 0.0170;
		}
	}

	return costo;
}
