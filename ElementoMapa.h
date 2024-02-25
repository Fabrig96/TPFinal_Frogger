#pragma once
#include "conio2.h"
#include <iostream>
	
class ElementoMapa {
public:
	virtual void dibujar() const = 0;
	virtual void colisionar() = 0;
	virtual ~ElementoMapa() {}
};
