#ifndef LECTURA_H
#define LECTURA_H

#include "operaciones.h"

void mostrarInventario(Inventario* inventario);
void ingresarInventario(Inventario* inventario);
void guardarInventario(const char* filename, Inventario* inventario);
void cargarInventario(const char* filename, Inventario* inventario);

#endif 
