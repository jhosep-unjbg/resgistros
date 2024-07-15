#include <iostream>
#include <string>

using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int numMedallas;
};

int main() {
    int n;
    cout << "Ingrese el número de atletas: ";
    cin >> n;
    
    Atleta atletas[n];
    
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta " << i+1 << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el país del atleta " << i+1 << ": ";
        cin >> atletas[i].pais;
        cout << "Ingrese la disciplina del atleta " << i+1 << ": ";
        cin >> atletas[i].disciplina;
        cout << "Ingrese el número de medallas del atleta " << i+1 << ": ";
        cin >> atletas[i].numMedallas;
    }
    
    string paisBuscado;
    cout << "Ingrese el país del que desea ver la información de los atletas: ";
    cin >> paisBuscado;
    
    int maxMedallas = 0;
    string atletaMaxMedallas;
    
    
    for (int i = 0; i < n; i++) {
        if (atletas[i].pais == paisBuscado) {
            cout << "Nombre: " << atletas[i].nombre << endl;
            cout << "País: " << atletas[i].pais << endl;
            cout << "Disciplina: " << atletas[i].disciplina << endl;
            cout << "Número de medallas: " << atletas[i].numMedallas << endl;
            
            if (atletas[i].numMedallas > maxMedallas) {
                maxMedallas = atletas[i].numMedallas;
                atletaMaxMedallas = atletas[i].nombre;
            }
        }
    }
    
    cout << "El atleta con más medallas de " << paisBuscado << " es: " << atletaMaxMedallas << endl;
    
    return 0;
}
