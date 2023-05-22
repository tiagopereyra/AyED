#include <iostream>

using namespace std;

int main() {
    double pi = 0.0;
    int signo = 1;
    int iteraciones = 0;

    while (true) {
        double termino = static_cast<double>(signo) / (2 * iteraciones + 1); // convierto el signo a double para que se que la division se haga entre dos doubles
        pi += termino;
        signo = -signo;  // cambia el signo en cada iteracion
        iteraciones++;

        double aproximacionDePi = 4 * pi;
        if (abs(aproximacionDePi - 3.141592) < .000001) { // se fija que tenga 6 decimales correctos para salir
            break;
        }
    }

    cout << "El valor de pi calculado con la serie de Leibniz es: " << 4 * pi << endl;
    cout << "Iteraciones: " << iteraciones << endl;

    return 0;
}
