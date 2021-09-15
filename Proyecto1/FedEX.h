#pragma once
#include "Envio.h"

#define COSTO 20.00

#ifndef FEDEX_H_
#define FEDEX_H_

class FedEX : public Envio {
private:
	
public:
	FedEX();
	virtual double calculoEnvio();

};

#endif
