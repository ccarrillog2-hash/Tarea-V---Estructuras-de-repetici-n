#include <iostream>
using namespace std;

int main() {
    cout << "Cindy Julissa Carrillo Guarcas" << endl << endl;
    int meses;
    double ahorro, totalahorro = 0, mayorahorro = 0;
    int mesconahorro = 0, contador500 = 0;

    cout << "Ingrese el numero de meses: ";
    cin >> meses;

    for (int i = 1; i <= meses; i++) {
        cout << "Ingrese el ahorro del mes " << i << ": ";
        cin >> ahorro;

        totalahorro += ahorro;

        if (ahorro >= 500) {
            contador500++;
        }
        if (ahorro > mayorahorro) {
            mayorahorro = ahorro;
            mesconahorro = i;
    }
    }
    double promedio = totalahorro / meses;

    cout << "Total ahorrado: Q" << totalahorro << endl;
    cout << "Promedio mensual: Q" << promedio << endl;
    cout << "Mayor ahorro realizado en el mes: " << mesconahorro << endl;
    cout << "Meses con ahorro de Q500 o mas: " << contador500 << endl;

    return 0;
}