#include <iostream>
#include <cstdlib>
#include <ctime> //for the time() function

int main() {

  //Seed the random number generator
  srand(time(NULL));

  // Your future is here
  std::cout << "MAGIC 8-BALL: \n\n";
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  
  int answer = std::rand() % 10;

  if (answer == 0) {
  std::cout << "It is certain. \n";
  }
  else if (answer == 1) {
  std::cout << "Ask again later.\n";
  }
  else if (answer == 2) {
  std::cout << "Without a doubt.\n";
  }
  else if (answer == 3) {
  std::cout << "Outlook good.\n";
  }
  else if (answer == 4) {
  std::cout << "Very hopeful!.\n";
  }
  else if (answer == 5) {
  std::cout << "Better not tell you now.\n";
  }
  else if (answer == 6) {
  std::cout << "Looking great!.\n";
  }
  else if (answer == 7) {
  std::cout << "Most likely.\n";
  }
  else if (answer == 1) {
  std::cout << "You may rely on it.\n";
  }
  else {
  std::cout << "Very doubtful.\n";
  }

  std::cout << "Goodbye! May the 8-ball be with you";
  return 0;

}
