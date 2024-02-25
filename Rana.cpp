#include "Rana.h"
#include "conio2.h"
#include <iostream>

Rana::Rana(int initialX, int initialY) : x(initialX), y(initialY) {}

void Rana::dibujar() const {
	gotoxy(x, y);
	std::cout " @.@ ";
}

void Rana::colisionar() {
	std::cout << "Colisión" << std::endl;
	
}

void Rana::mover(int deltaX, int deltaY) {
	gotoxy(x, y);
	std::cout << " "; 
	x += deltaX;
	y += deltaY;
	dibujar(); 
}
