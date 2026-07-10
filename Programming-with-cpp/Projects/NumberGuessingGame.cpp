#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
   
    std::srand(std::time(0));
    
  
    int secretNumber = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << "========== NUMBER GUESSING GAME =========\n";
    std::cout << "Guess number between 1 and 100.\n\n";


    while (userGuess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n\n";
        } else {
            std::cout << "\nCorrect! You found it in " << attempts << " attempts.\n"<<"================== End Game ================\n";
        }
    }

    return 0;
}
