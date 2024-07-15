#include <iostream>
#include <vector>
using namespace std;

struct Persona {
    string nombre;
    int dia;
    int mes;
    int anno;
};

int main() {
    int n;
    cout << "Ingrese el n�mero de personas: ";
    cin >> n;

    vector<Persona> personas(n);

    for (int i = 0; i < n; i++) {
        cout << "Persona " << i+1 << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "D�a de nacimiento: ";
        cin >> personas[i].dia;
        cout << "Mes de nacimiento: ";
        cin >> personas[i].mes;
        cout << "A�o de nacimiento: ";
        cin >> personas[i].anno;
    }

    int numeroMes;
    cout << "Ingrese un n�mero de mes (1-12) o 0 para terminar: ";
    cin >> numeroMes;

    while (numeroMes != 0) {
        cout << "Personas que cumplen a�os en el mes " << numeroMes << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (personas[i].mes == numeroMes) {
                cout << "Nombre: " << personas[i].nombre << ", Fecha de nacimiento: " << personas[i].dia << "/" << personas[i].mes << "/" << personas[i].anno << endl;
            }
        }

        cout << "Ingrese un n�mero de mes (1-12) o 0 para terminar: ";
        cin >> numeroMes;
    }

    return 0;
}
