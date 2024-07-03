#ifndef OPERACIONES_H
#define OPERACIONES_H

#define MAX_GENEROS 5

extern const char* generos[MAX_GENEROS];

typedef struct {
    int vinilos;
    int cds;
    int cassettes;
} Inventario;

void modificarInventario(Inventario* inventario);

#endif
