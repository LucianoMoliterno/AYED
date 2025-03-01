#include <stdio.h>
#include "duenio.h"

int main() {
    printf("------RECUPERATORIO PARCIAL AYED------\n\n");

    printf("\n---DUENIO SIN VIVIENDAS---\n");
    Duenio* duenio = crearDuenio("Nicolas", 1212); //creo un dueño sin viviendas
    mostrarDuenio(duenio); //PUNTO 1 - muestro al dueño

    // Creo 3 viviendas
    Vivienda* v1 = crearVivienda(12, 1100000, 45, "Peron 1500 4A");
    Vivienda* v2 = crearVivienda(121, 2100000, 90, "Alfonsin 178");
    Vivienda* v3 = crearVivienda(9006, 100000, 20, "Corrientes 1001");

    // Inserto las 3 viviendas en la lista de compras
    insertarFinal(duenio->listaViviendas, v1);
    insertarInicio(duenio->listaViviendas, v2);
    insertarEnPosicion(duenio->listaViviendas, v3, 1);

    //PUNTO 2 - Muestro al dueño con las 3 viviendas compradas
    printf("\n---DUENIO LUEGO DE LAS COMPRAS---\n");
    mostrarDuenio(duenio);

    // Vendo la vivienda con ID 12
    eliminarPorID(duenio->listaViviendas, 12);

    printf("\n---DUENIO LUEGO DE LA VENTA (ID 12)---\n");
    mostrarDuenio(duenio);

    return 0;
}
