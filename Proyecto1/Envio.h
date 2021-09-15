using namespace std;

#ifndef ENVIO_H_
#define ENVIO_H_

class Envio{
	
private:
	

protected:
	int peso;
	int distancia;
	double costo;
	
	

public:
	Envio();
	virtual double calculoEnvio();
	int getPeso();
	void setPeso(int peso);
	int getDistancia();
	void setDistancia(int distancia);

};
#endif 
