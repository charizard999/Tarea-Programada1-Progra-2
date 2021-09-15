
#include <iostream>
#include <stdio.h>
#include "Envio.h"
#include "Servicio_Postal.h"
#include "FedEx.h"
#include <vector>

using namespace std;


int main() {
	setlocale(LC_ALL, "");
	vector <Envio*> arregloEnvios;
	int distancia=0;
	double peso=0.0;
	int clase = 0;
	int opcion;


	do {
		cout << "\n Seleccione el método de envío:";
		cout << "\n 1. Servicio Postal";
		cout << "\n 2. FedEx";
		cout << "\n 3. Mostrar el monto total de los envíos";
		cout << "\n 4. Salir";

		cin >> opcion;

		switch (opcion) {
		case 1: {
				cout << "\n Ingrese la distancia:" << endl;
				cin >> distancia;
				cout << "\n Ingrese la peso:" << endl;
				cin >> peso;
				cout << "\n Ingrese la clase:" << endl;
				cin >> clase;

				Servicio_Postal* servicio = new Servicio_Postal();
				servicio->setDistancia(distancia);
				servicio->setPeso(peso);
				servicio->setClase(clase);
				arregloEnvios.push_back(servicio);
			break;
		}
		case 2: {
				cout << "\n Ingrese la distancia:" << endl;
				cin >> distancia;
				cout << "\n Ingrese el peso:" << endl;
				cin >> peso;
				FedEX* fedEx = new FedEX();
				fedEx->setDistancia(distancia);
				fedEx->setPeso(peso);
				arregloEnvios.push_back(fedEx);
			break;
		}
		case 3: {
				double totalMontoEnvios = 0;
				for (Envio* envio : arregloEnvios){
					totalMontoEnvios += envio->calculoEnvio();
				}
				cout << "El monto total de los envios es de " << totalMontoEnvios << endl;
			break;
		}
				
		case 4: {
				cout << "\n Fin del programa." << endl;
			break;
		}

		default: {
			break;
			}
				
		}
	} while (opcion != 4);
	
	
	system("pause");
	return 0;
}