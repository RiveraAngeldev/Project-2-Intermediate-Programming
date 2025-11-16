/*
Using at()
Determine the values of text.at(0), text.at(3), and text.at(10) for the following strings:

a. ahora es el momento
b. el mapache rocky le da la bienvenida
c. Felices fiestas
d. El buen barco
*/

#include <iostream>
#include<string> // library for string
using namespace std;
int main() {
    string str1 = "ahora es el momento"; ///defining string variables
    string str2 = "el mapache rocky le da la bienvenida";
    string str3 = "Felices fiestas";
    string str4 = "El buen barco";


    //Output the characters at indices 0, 3, and 10 using at()
    cout<< "\tQuestion a: "<<"(Value of text.at(0): (" <<str1.at(0)<<"), Value of text.at(3): ("<< str1.at(3)<< "), Value of text.at(10): ("<<str1.at(10)<<")"<<endl;
    cout<< "\tQuestion b: "<<"(Value of text.at(0): (" <<str2.at(0)<<"), Value of text.at(3): ("<< str2.at(3)<< "), Value of text.at(10): ("<<str2.at(10)<<")"<<endl;
    cout<< "\tQuestion c: "<<"(Value of text.at(0): (" <<str3.at(0)<<"), Value of text.at(3): ("<< str3.at(3)<< "), Value of text.at(10): ("<<str3.at(10)<<")"<<endl;
    cout<< "\tQuestion d: "<<"(Value of text.at(0): (" <<str4.at(0)<<"), Value of text.at(3): ("<< str4.at(3)<< "), Value of text.at(10): ("<<str4.at(10)<<")"<<endl;
    return 0;
}



