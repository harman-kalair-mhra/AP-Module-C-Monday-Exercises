// declared a number of variables with appropriate datatypes. Picturing, how will i use these variables.
// attempted stage by stage, e.g. setting up a while loop and breaking, when pressed 0.
// using builtin functions to convert string to float.
// calculated tax and added to subtotal.


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string item;
string coststring;
int itemCount;
int count = 0;
float cost;
float subtotal;
const float tax = 0.055; // will never change
bool loop = false;
float itemTax;

int main() 
{
  while (true)
  {
    count++;
    cout << "Please enter a quantity for Item " << count << "(or 0 to finish): ";
    cin >> item;

itemCount = atof( item.c_str() );
  if( itemCount <= 0 ){
    break;
  }
    cout << "Please enter Item " << count << " cost: ";
    cin >> coststring;

  cost = atof( coststring.c_str() );

  cost *= itemCount;
  subtotal += cost;
  cout << "\n";
  // cout << subtotal; // for debugging purposes

  }
  
  cout << "\n";
  cout << "Subtotal: " << subtotal;
    
  itemTax = subtotal * tax;
  subtotal += itemTax;
  cout << "\n";

  cout << "Shopping Tax: £" << fixed << itemTax << "\n\nTotal: £" << subtotal;

  
}

