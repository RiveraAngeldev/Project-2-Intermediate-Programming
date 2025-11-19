/*
4.  Escriba un programa que especifique tres arreglos unidimensionales llamados corriente,
    resistencia y voltios. Cada arreglo deberá ser capaz de contener 10 elementos.
    Usando un ciclo for, introduzca valores para los arreglos corriente y resistencia.
    Las entradas en el arreglo voltios deberán ser el producto de los valores correspondientes
    en los arreglos corriente y resistencia (por tanto, voltios[i] = corriente[i] * resistencia[i]).
    Después que se han introducido todos los datos, despliegue la siguiente salida: 

    Corriente   Resistencia         Voltios
Ej.     1           2                   3
 
    Bajo cada encabezado de columna despliegue el valor apropiado.

*/

#include<iostream>  // Standard library for input/output (cout)
#include <ctime>    // Includes the library for the time() function (used for the random seed)
using namespace std;    // Allows using core C++ objects like cout and setw without the std:: prefix

/*
 * Function: fill_array
 * Fills the 'current' and 'resistance' arrays with random integer values based on realistic limits
 * current[]: Integer array representing electrical current (Amps)
 * resistance[]: Integer array representing electrical resistance (Ohms)
 * Returns: void.
 */
void fill_array(int current[], int resistance[]) {
    // Declares local variables and sets realistic limits for random number generation
    int num, current_max = 20, resistance_max = 150; 

    // For loop that iterates 10 times (indices 0 to 9) to fill both arrays
    for(int i = 0; i < 10; i++) {
        // Generates a random number for Current (I)
        num = rand() % current_max;
        current[i] = num;

        // Generates a random number for Resistance (R)
        num = rand() % resistance_max;
        resistance[i] = num;
    }
}

/*
 * Function: main
 * Main entry point of the program. Initializes the random seed, calculates Voltage (V=I*R),
 * and displays the final formatted table of results.
 * Returns: 0 upon successful execution.
 */
int main() {
    // Initializes the random number generator only once using the current time
    srand(time(NULL));
    
    // Declares the three 10 element arrays: Current, Resistance, and Volts
    int current[10], resistance[10], volts[10]; 

    // Calls the function to fill the Current and Resistance arrays
    fill_array(current, resistance);

    // For loop that iterates 10 times to calculate the Voltage (V)
    for (int i = 0; i < 10; i++) {
        // Applies Ohm's Law: Volts[i] = Current[i] * Resistance[i]
        volts[i] = current[i] * resistance[i];
    }

    // Prints the table header, using \t
    cout << "\tCorriente" << "\tResistencia" << "\tVoltios" << endl;
    
    // For loop to print the 10 rows of calculated data
    for (int i = 0; i < 10; i++) {
        // Prints the array values using adjusted \t values for visual alignment under the headers
        cout << "\t    " <<current[i] << "\t\t    " << resistance[i] << "\t\t  " << volts[i] << endl;
    }
    
    return 0;
}