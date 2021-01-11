//https://repl.it/join/mnjllkcu-harmankalair123

// Simply began by taking simple user input and storing it's value inside a variable
// Get another set of input from the user and store them inside a variable
// if/else statements embeded with formulas and only triggred based on user's input
// Finally output the conversion value

#include <iostream>
using namespace std;

int main() {

float fahrenheit;
float centigrade;
float temp;
char choice;

cout << "Please enter the starting temperature:" << endl;
cin >> temp;

cout << "F.Press ‘F’ to convert from Centigrade to Fahrenheit." << endl;
cout << "C. Press ‘C’ to convert from Fahrenheit to Centigrade." << endl;
cin >> choice;

if (choice == 'F' || choice == 'f')
{
fahrenheit = (1.8 * temp) + 32.0; 
cout << "\nTemperature conversion: " << fahrenheit << " F" << endl;

}

else if (choice == 'C' || choice == 'c')
{
  centigrade = (temp - 32) / 1.8; 
      cout << "\nTemperature conversion: " << centigrade << " C" << endl;
}
}
