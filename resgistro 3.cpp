#include <iostream>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
};

int main() {
    const int MAX_PERSONAS = 100;
    Persona personas[MAX_PERSONAS];
    int numPersonas = 0;
    char respuesta;
    
    do {
        cout << "Ingrese el nombre de la persona: ";
        cin >> personas[numPersonas].nombre;

        cout << "Ingrese el día de nacimiento de la persona: ";
        cin >> personas[numPersonas].diaNacimiento;

        cout << "Ingrese el mes de nacimiento de la persona: ";
        cin >> personas[numPersonas].mesNacimiento;

        cout << "Ingrese el año de nacimiento de la persona: ";
        cin >> personas[numPersonas].anioNacimiento;

        numPersonas++;

        cout << "¿Desea ingresar los datos de otra persona? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's');

    
    int mesConsulta;
    do {
        cout << "Ingrese un número de mes (0 para salir): ";
        cin >> mesConsulta;

        if (mesConsulta != 0) {
            for (int i = 0; i < numPersonas; i++) {
                if (personas[i].mesNacimiento == mesConsulta) {
                    std::cout << "Nombre: " << personas[i].nombre << std::endl;
                    std::cout << "Fecha de nacimiento: " << personas[i].diaNacimiento << "/" << personas[i].mesNacimiento << "/" << personas[i].anioNacimiento << std::endl;
                }
            }
        }
    } while (mesConsulta != 0);

    return 0;
}

