#include <stdio.h>
#include <string.h>
#include "operaciones.h"

const char* generos[MAX_GENEROS] = {"Jazz", "Funk", "Pop", "Reguetón", "Clásico"};

void modificarInventario(Inventario* inventario) {
    char genero[50];
    int generoIndex = -1;

    printf("\nIngrese el nombre del género que quiere editar: ");
    scanf(" %[^\n]s", genero);

    for (int i = 0; i < MAX_GENEROS; i++) {
        if (strcmp(genero, generos[i]) == 0) {
            generoIndex = i;
            break;
        }
    }

    if (generoIndex != -1) {
        do {
            printf("\nAhora estás modificando datos para el género %s:\n", generos[generoIndex]);
            printf("   Cantidad de vinilos (actual: %d): ", inventario[generoIndex].vinilos);
            scanf("%d", &inventario[generoIndex].vinilos);
            if (inventario[generoIndex].vinilos < 0) {
                printf("No se debe ingresar números negativos. Intente nuevamente.\n");
            }
        } while (inventario[generoIndex].vinilos < 0);

        do {
            printf("Cantidad de CDs (actual: %d): ", inventario[generoIndex].cds);
            scanf("%d", &inventario[generoIndex].cds);
            if (inventario[generoIndex].cds < 0) {
                printf("No se debe ingresar números negativos. Intente nuevamente.\n");
            }
        } while (inventario[generoIndex].cds < 0);

        do {
            printf("Cantidad de cassettes (actual: %d): ", inventario[generoIndex].cassettes);
            scanf("%d", &inventario[generoIndex].cassettes);
            if (inventario[generoIndex].cassettes < 0) {
                printf("No se debe ingresar números negativos. Intente nuevamente.\n");
            }
        } while (inventario[generoIndex].cassettes < 0);
    } else {
        printf("Género no válido.\n");
    }
}
