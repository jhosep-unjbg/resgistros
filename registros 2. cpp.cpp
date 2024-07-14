#include <iostream>
#include <string>

using namespace std;
struct Persona {
    string nombres;
    int DNI;
    int edad;
};

int main() {
    int n;
    int contadorMayor50 = 0;
    int sumaEdades = 0;
    float promedioEdades;
    
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    
    Persona personas[n];
    
    for(int i = 0; i < n; i++) {
        cout << "Persona " << i+1 << std::endl;
        cout << "Nombres: ";
        cin >> personas[i].nombres;
        cout << "DNI: ";
        cin >> personas[i].DNI;
        cout << "Edad: ";
        cin >> personas[i].edad;
        
        if(personas[i].edad > 50) {
            contadorMayor50++;
        }
        
        sumaEdades += personas[i].edad;
    }
    
    promedioEdades = static_cast<float>(sumaEdades) / n;
    
    cout << std::endl;
    cout << "Cantidad de personas mayores a 50 años: " << contadorMayor50 << std::endl;
    cout << "Promedio de edades: " << promedioEdades << std::endl;
    cout << "Datos de las personas ingresadas: " << std::endl;
    
    for(int i = 0; i < n; i++) {
        cout<< "Persona " << i+1 <<":"<< endl;
        cout << "Nombres: " << personas[i].nombres <<endl;
        cout << "DNI: " << personas[i].DNI << endl;
        cout << "Edad: " << personas[i].edad << endl;
        cout << endl;
    }
    
    return 0;
}
