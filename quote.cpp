//https://repl.it/join/mezsidkf-harmankalair123

//Started with taking input from the user.
//Then store the input from the user inside a variable.
//Finally, combining the two inputs from the user to display on a single output line

#include <iostream>



int main() {
  std::string author;
  std::string quote;

  std::cout << "What is the Quote?" << '\n';
  std::getline (std::cin,quote);
  std::cout << "Who said it?" << '\n';
  std::getline (std::cin,author);

  std::cout << "\n" << author << " says: \"" << quote << "\" \n";
  return 0;
}
