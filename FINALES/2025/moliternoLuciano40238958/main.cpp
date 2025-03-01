#include "escuela.h"
#include <iostream>

void cargarDatos(Escuela& escuela) {
    // Datos de la escuela
    escuela = Escuela("Escuela Secundaria \"Las Americas\"", "calle ficticia 123, cuidad X", "+54 11 5555-1234");

    // Turno Mañana
    Turno turnoManana("Manana", "7:30 AM - 1:00 PM");
    turnoManana.agregarDocente(Docente("Juan Perez", 35, "Matematicas", 50000));
    turnoManana.agregarDocente(Docente("Ana Gonzalez", 28, "Lengua", 48000));
    turnoManana.agregarDocente(Docente("Carlos Rodriguez", 42, "Fisica", 55000));
    escuela.agregarTurno(turnoManana);

    // Turno Tarde
    Turno turnoTarde("Tarde", "1:30 PM - 7:00 PM");
    turnoTarde.agregarDocente(Docente("Juan Perez", 35, "Matematicas", 50000));
    turnoTarde.agregarDocente(Docente("Maria Lopez", 30, "Biologia", 47000));
    turnoTarde.agregarDocente(Docente("Ana Gonzalez", 28, "Lengua", 48000));
    turnoTarde.agregarDocente(Docente("Laura Garcia", 38, "Historia", 52000));
    escuela.agregarTurno(turnoTarde);

    // Turno Noche
    Turno turnoNoche("Noche", "7:30 PM - 11:00 PM");
    turnoNoche.agregarDocente(Docente("Carlos Rodriguez", 42, "Fisica", 55000));
    turnoNoche.agregarDocente(Docente("Laura Garcia", 38, "Historia", 52000));
    turnoNoche.agregarDocente(Docente("Fernando Diaz", 45, "Quimica", 53000));
    escuela.agregarTurno(turnoNoche);
}

int main() {
    Escuela escuela("", "", "");
    cargarDatos(escuela);

    // Muestra información de la escuela
    std::cout << "B) Informacion de la escuela:" << std::endl;
    escuela.mostrarInformacion();

    // Calcula y muestra el promedio de sueldos
    double promedioSueldos = escuela.calcularPromedioSueldos();
    std::cout << "C) Promedio de sueldos: $" << promedioSueldos << std::endl;

    // Elimina docentes menores de 30 años y muestra la información actualizada
    escuela.eliminarDocentesMenoresDe30();
    std::cout << "\n D) Informacion de la escuela despues de eliminar docentes menores de 30 anios:" << std::endl;
    escuela.mostrarInformacion();

    return 0;
}
