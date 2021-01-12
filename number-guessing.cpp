// https://repl.it/join/laesttts-harmankalair123

// started with simply declaring relevant variables, required for this exercise.
// I broke down the problem into smaller parts, e.g. started with taking input from the user and saving it inside relevant variables
// added if statements, as certain conditions will be triggered based on user input.
// added recursion to run the main program, if user wants to play again.


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
  int randNumber;
  int userNumber;
  bool win = false;
  unsigned seed = time(0);
  int numOfAttempts = 0;
  string levels;
  int levelInt;
  char playagain;



  cout << "Please pick a difficulty level (1, 2 or 3)? ";
  cin >> levels;

  levelInt = atof( levels.c_str() );
 
if (levelInt == 1){
  srand(seed);
  randNumber = 1 + rand()%10;

  cout << "Great, I have randomly picked a number in the range 1 - 10" << endl;
  cin >> userNumber;
  // cout << randNumber; // for debugginh purposes
}

else if ( levelInt == 2)
{
  srand(seed);
  randNumber = 1 + rand()%100;
  cout << "Great, I have randomly picked a number in the range 1 - 100" << endl;
  cin >> userNumber;
  // cout << randNumber; // for debugginh purposes
}

else if ( levelInt == 3)
{
  srand(seed);
  randNumber = 1 + rand()%1000;
  cout << "Great, I have randomly picked a number in the range 1 - 1000" << endl;
  cin >> userNumber;
  // cout << randNumber; // for debugginh purposes
}
  while (win == false)
  {
    if (userNumber < randNumber)
    {
      cout << "Too low, guess again" << endl;
      cin >> userNumber;
      numOfAttempts++;
    }
    else if (userNumber > randNumber)
    {
      cout << "Too high, guess again" << endl;
      cin >> userNumber;
      numOfAttempts++;
    }
    else
    {
      numOfAttempts++;
      cout << "Well done, the number was " << randNumber << " and you got it in " << numOfAttempts << " attempts" << endl;
      
      win = true;
      
    }
  }
  cout << "Do you want to play again (Y/N)? ";
  cin >> playagain;

  if (playagain == 'Y' || playagain == 'y') // runs main again, if Y or y
  {
    main();
  }

  else if (playagain == 'N' || playagain == 'n')
  {
    cout << "No problem, see you later. ";
    return 0;
  }
  else
  {
    cout << "Error! Incorrect Value ";
    return 0;
  }
}
