#include "pch.h"
#include "gtest/gtest.h"

#include "../Proyecto1/Servicio_Postal.h"
#include "../Proyecto1/FedEX.h"

TEST(ServicioPostalTest, ServicioPostal_Calculo_Envio) {
	Servicio_Postal servicioPostal = Servicio_Postal();
	servicioPostal.setClase(1);
	servicioPostal.setPeso(2);
	servicioPostal.setDistancia(10);

	double actual = servicioPostal.calculoEnvio();

	EXPECT_FLOAT_EQ(1.95, actual);
	EXPECT_TRUE(true);

}

TEST(FedEXTest, FedEX_Calculo_Envio) {
	FedEX fedEX = FedEX();
	fedEX.setDistancia(5);
	fedEX.setPeso(5);

	double actual = fedEX.calculoEnvio();

	EXPECT_EQ(23, actual);
	EXPECT_TRUE(true);
	
}