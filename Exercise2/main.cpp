/*
2.	Usando el método at(), escriba un programa en C++ que lea en 
    una cadena usando getline() y luego despliegue la cadena en orden inverso.
*/

#include<iostream>  // Standard library for input/output (cout, cin)
#include<string>    // Library for handling strings (std::string)
using namespace std;    // Allows using cout and cin without std::


/*
 * Function: main
 *  Main entry point of the program.
 *  Reads a full line of text from the user and calls reverse_text()
 *  to print it backwards.
 */
int main() {
    string texto;   // Variable to store user input
    cout << "Enter text: "; // Ask user for text input
    getline(cin, texto);    // Reads the entire line (including spaces)


    cout << "\nReversed text: ";    // Display header before reversed output
    for (int i = texto.length() - 1; i >= 0; i--) {
        cout << texto.at(i);    // Uses the at() method to access character at position i
    }
    cout << endl;                   // Print newline for clean formatting

    return 0;                       // End of program
}