#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Guessing Game!\n\n";
    cout << "I have selected a number between 1 and 100. Try to guess it.\n\n";
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess > secretNumber) {
            cout << "Too high! Try again.\n\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n\n";
        } else {
            cout << "Congratulations! You guessed it right in " << attempts << " attempts!\n";
        }
    } while (guess != secretNumber);
    
    return 0;
}
