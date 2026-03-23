#include <iostream>
using namespace std;

int main() {
    float nota;
    float suma = 0;
    int Aprobadas = 0;
    int Reprobadas = 0;
    int totalNotas = 5;

    for(int i = 1; i <= totalNotas; i++) {
        cout << "Ingrese la nota" << i << ": ";
        cin >> nota;

        suma += nota;

        if(nota >= 61) {
            Aprobadas++;
        } else {
            Reprobadas++;
        }
    }

    float promedio = suma / totalNotas;

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Notas aprobadas: " << Aprobadas << endl;
    cout << "Notas reprobadas: " << Reprobadas << endl;

    if(promedio >= 61) {
        cout << "Resultado final: Aprueba." << endl;
    } else {
        cout << "Resultado final: Reprueba" << endl;
    }
    return 0;
}