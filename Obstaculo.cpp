#include "Obstaculo.h"
#include "conio2.h"
#include <iostream>

void Obstaculo::dibujar() const {
	std::cout << "O";
}

void Obstaculo::colisionar() {
	std::cout << "Colisión con obstáculo!" << std::endl;
	
}
