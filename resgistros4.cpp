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
    cout << "Ingrese el n�mero de atletas: ";
    cin >> n;
    
    Atleta atletas[n];
    
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta " << i+1 << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el pa�s del atleta " << i+1 << ": ";
        cin >> atletas[i].pais;
        cout << "Ingrese la disciplina del atleta " << i+1 << ": ";
        cin >> atletas[i].disciplina;
        cout << "Ingrese el n�mero de medallas del atleta " << i+1 << ": ";
        cin >> atletas[i].numMedallas;
    }
    
    string paisBuscado;
    cout << "Ingrese el pa�s del que desea ver la informaci�n de los atletas: ";
    cin >> paisBuscado;
    
    int maxMedallas = 0;
    string atletaMaxMedallas;
    
    
    for (int i = 0; i < n; i++) {
        if (atletas[i].pais == paisBuscado) {
            cout << "Nombre: " << atletas[i].nombre << endl;
            cout << "Pa�s: " << atletas[i].pais << endl;
            cout << "Disciplina: " << atletas[i].disciplina << endl;
            cout << "N�mero de medallas: " << atletas[i].numMedallas << endl;
            
            if (atletas[i].numMedallas > maxMedallas) {
                maxMedallas = atletas[i].numMedallas;
                atletaMaxMedallas = atletas[i].nombre;
            }
        }
    }
    
    cout << "El atleta con m�s medallas de " << paisBuscado << " es: " << atletaMaxMedallas << endl;
    
    return 0;
}
