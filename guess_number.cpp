#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Can you guess it?\n";

    // Loop until user guesses correctly
    while (userGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in " 
                 << attempts << " attempts.\n";
        }
    }

    return 0;
}