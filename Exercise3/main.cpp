/*
    3.	Escriba un programa en C++ que acepte tanto una cadena como un solo carácter del usuario. 
        El programa deberá determinar cuántas veces está contenido el carácter en la cadena.
*/

#include<iostream>  // Standard library for input/output (cout, cin, getline)
#include<string>    // Library for handling strings (std::string, length())
using namespace std;    // Allows using cout and cin without the prefix 'std::'

/*
 * Function: main
 * Main entry point of the program.
 * Reads a string and a single character from the user, then counts
 * how many times the character appears in the string.
 * Returns: 0 upon successful completion.
 */
int main() {
    string text;    // Variable to store the text (string) entered by the user
    char letra;     // Variable to store the single character the user wants to search
    int count = 0;  // Counter initialized to zero, used to track character occurrences
    
    cout << "Enter the text: "; // Prompt the user to enter a text string
    getline(cin, text);    // Reads the entire line of text (including spaces) from the user
    
    cout << "Enter the character to search for: "; // Prompt the user to enter the character to search
    cin >> letra;   // Reads a single character from the input buffer

    // Loop through the string, starting at index 0 and stopping before text.length()
    for (int i = 0; i < text.length(); i++) {
        // Check if the current character in the string (text[i]) matches the search character (letra)
        if (letra == text[i]) {
            count++;    // If they match, increment the counter
        }
    }
    
    // Display the final result to the user
    cout << "The character " << letra << " appeared " << count << " times in the text." << endl;
    
    return 0;   // Indicate successful execution of the program
}