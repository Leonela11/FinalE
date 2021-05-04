#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * Escriba un programa que remueva los elementos duplicados de cualquier arreglo, debe mostrar en pantalla el arreglo resultante
     * Ejemplo 1: array = [1,2,2,3] array2 = [2,2] ---> Resultado: [1,2,3]
     * Ejemplo 2: array = [0,0,0,1,2,2,3,3,3,3,3,3,4,4,4] ---> Resultado: [0,1,2,3,4]
     * Consejo: Asuma que el arreglo que se probará siempre va a estar ordenado
     */
    cout << "Challenge #1" << endl;
    cout <<"Ingrese las pposiciones que deseas colocar" << endl;
    cin >> n;
    int n;
    int arreglo[] = {0, 1, 1, 1, 2, 2};  // Empiece con este arreglo ya existente, el docente modificará este arreglo para pruebas
    for (int i =0; i<=n; i++){
        cout << ("\nindice[n]: ", i);
        cin >> arreglo[i];
    }
    for (int k = 0; k<n; k++){
        int num = 0;
        n = arreglo[i];
        k++;

    }
    return 0;

}