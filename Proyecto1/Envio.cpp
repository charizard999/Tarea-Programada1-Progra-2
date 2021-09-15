#include "Envio.h"
#include <iostream>

Envio::Envio()	{

	this->peso = 0;
	this->distancia = 0;
	this->costo = 0.0;

}
double Envio::calculoEnvio(){
	
	cout << "calculo de envio en ENVIO:   "<< endl;
	return 0;
}
int Envio::getDistancia(){

	return this->distancia;
}
void Envio::setDistancia(int distancia){


	this->distancia = distancia;
}
int Envio::getPeso() {


	return this->peso;
}
void Envio::setPeso(int peso) {


	this->peso = peso;
}



 