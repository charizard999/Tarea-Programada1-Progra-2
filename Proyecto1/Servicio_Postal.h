
#pragma once
#include "Envio.h"



#ifndef SERVICIO_POSTAL_H_
#define SERVICIO_POSTAL_H_
class Servicio_Postal : public Envio {

private:
	int clase;

public:
	Servicio_Postal();
	virtual double calculoEnvio();
	int getClase();
	void setClase(int clase);

};

#endif