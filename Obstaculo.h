#pragma once
#include "ElementoMapa.h"  

class Obstaculo : public ElementoMapa {
public:
	void dibujar() const override;
	void colisionar() override;
};
