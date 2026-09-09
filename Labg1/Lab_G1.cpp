/* Juego RPG - Sanador
En un pueblo, los heroes llegan a la enfermeria con distintos niveles de vida. Los aprendices de curandero quieren experimentar cómo cambia la vida de un personaje cuando realmente lo curan o lo
lo atacan.
A partir de las funciones proporcionadas, implemente las tres operaciones solicitadas, aplicando correctamente cada mecanismo de paso parámetros

Funciones por implementar: 
Curar, realizar una curacion real modificando la vida mediante referencia. 

Requisitos del sistema: 
La funcion main() deberá encargarse de crear y manejar la vida del personaje. 
La vida inicial del personaje debe ser de 100 puntos
la función curar (int &vida, int puntos) deberá aumentar la vida, modificando el valor mediante puntero, si la vida tiene 100 puntos maximos no se le podra aumentar vida, esto solo es si recibe daño
No se permiten cantidades negativas en las operaciones de curación o ataque. 
La vida del personaje no puede superar los 100 puntos.
La vida del personaje no puede ser menor que 0 puntos. 
Se deberán implementar validaciones mediante if para controlar las condiciones anteriores. 
Cada operación deberá mostrar un mensaje claro indicando si fue realizada correctamente o s iprodujo un error.
El programa deberá demostrar el funcionamiento de las tres funciones utilizando datos quedamados (hardcoded) dentro de la función main() o solicitarlos al usuario
*/
#include <iostream>
using namespace std;

int main() {
    int vida = 100;
    string personaje;
    cout << "Bienvenido al juego RPG - Sanador" << endl;
    cout << "La vida inicial del personaje es: " << vida << endl;
    cout << "Ingrese el nombre del personaje: " << endl;
    cin >> personaje;
    cout << "Personaje seleccionado: " << personaje << endl;


    return 0;
}

