
#include <iostream>
#include <string>
using namespace std;


void ConsultarVida(int vida) {
    cout << "Vida actual: " << vida << endl;
}

void curar(int &vida, int puntos) {

    if (puntos < 0) {
        cout << "Error: no se pueden utilizar puntos negativos para curar." << endl;
        return;
    }

    if (vida == 100) {
        cout << "Error: el personaje ya tiene 100 puntos de vida." << endl;
        return;
    }

    vida += puntos;

    if (vida > 100) {
        vida = 100;
        cout << "Curacion realizada, pero la vida se ajusto al maximo de 100." << endl;
    } else {
        cout << "Curacion realizada correctamente." << endl;
    }

    cout << "Vida actual: " << vida << endl;
}

void atacar(int &vida, int puntos) {

    if (puntos < 0) {
        cout << "Error: no se pueden utilizar puntos negativos para atacar." << endl;
        return;
    }

    vida -= puntos;

    if (vida < 0) {
        vida = 0;
        cout << "Ataque realizado. La vida llego a 0." << endl;
    } else {
        cout << "Ataque realizado correctamente." << endl;
    }

    cout << "Vida actual: " << vida << endl;
}


int main() {

    int vida = 100;
    string personaje;

    cout << "======================================" << endl;
    cout << "       JUEGO RPG - SANADOR" << endl;
    cout << "======================================" << endl;

    cout << "Ingrese el nombre del personaje: ";
    cin >> personaje;

    cout << endl;
    cout << "Personaje seleccionado: " << personaje << endl;
    cout << "Vida inicial: " << vida << endl;

    cout << endl;
    cout << "--- CONSULTAR VIDA ---" << endl;
    ConsultarVida(vida);

    cout << endl;
    cout << "--- CURACION ---" << endl;
    curar(vida, 20);

    cout << endl;
    cout << "--- ATAQUE ---" << endl;
    atacar(vida, 40);

    cout << endl;
    cout << "--- CONSULTAR VIDA ---" << endl;
    ConsultarVida(vida);

    cout << endl;
    cout << "--- CURACION ---" << endl;
    curar(vida, 20);

    cout << endl;
    cout << "======================================" << endl;
    cout << "Vida final de " << personaje << ": " << vida << endl;
    cout << "======================================" << endl;

    return 0;
}
