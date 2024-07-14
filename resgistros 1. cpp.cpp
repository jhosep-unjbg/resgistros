#include <iostream> 

using namespace std;

struct Empleado { 
        string nombres; 
        string sexo; 
		float sueldo; 
		};

int main() { 
     int n; 
	 
	 cout << "Ingrese el numero de empleados: "; 
	 cin >> n;

Empleado empleados[n];


    for (int i = 0; i < n; i++) {
    cout<<"ingrese los datos del empleado " << i+1 << ":" << endl;
    cout<<"nombres: ";
    cin>>empleados[i].nombres;
    cout<<"sexo: ";
    cin>>empleados[i].sexo;
    cout<<"sueldo: ";
    cin>>empleados[i].sueldo;
}
Empleado mayor_salario = empleados[0];
Empleado menor_salario = empleados[0];

for (int i = 1; i < n; i++) {
    if (empleados[i].sueldo > mayor_salario.sueldo) {
        mayor_salario = empleados[i];
    }
    if (empleados[i].sueldo < menor_salario.sueldo) {
        menor_salario = empleados[i];
    }
}

cout<<"empleado con mayor salario:"<<endl;
cout<<"nombres: "<< mayor_salario.nombres<<endl;
cout<<"sexo: "<< mayor_salario.sexo<<endl;
cout<<"ueldo: "<< mayor_salario.sueldo<<endl;

cout<<"empleado con menor salario:"<< endl;
cout<<"nombres: "<<menor_salario.nombres<<endl;
cout<<"sexo: "<<menor_salario.sexo<<endl;
cout<<"sueldo: "<<menor_salario.sueldo<<endl;

return 0;
}
