#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  
    srand(time(0));
// this this my first task 
    int randomNumber = rand() % 100 + 1;

   std::cout << "Welcome to the Guess the Number Game!\n";
  std::cout << "\n";
   std::cout << "I am thinking of a number between 1 to 100\n";
  
    std::cout << "Guess the number I am thinking: ";
    int userGuess;
    std::cin >> userGuess;

   
    while (userGuess != randomNumber) {
        if (userGuess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Too low! Try again: ";
        }
        std::cin >> userGuess;
    }


    std::cout << "Congratulations! You guessed the correct number.\n";

    return 0;
}