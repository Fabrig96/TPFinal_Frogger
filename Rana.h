#pragma once
#include "ElementoMapa.h"  // Asegúrate de incluir el archivo de encabezado de ElementoMapa
#include "conio2.h"

class Rana : public ElementoMapa {
private:
	int x, y;
	
public:
	Rana(int initialX, int initialY);
	
	void dibujar() const override;
	void colisionar() override;
	void mover(int deltaX, int deltaY);
};
