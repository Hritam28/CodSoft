#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void guessthenumber() {
    srand(static_cast<unsigned int>(std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Aim Higher! Try again." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Not that much ! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);
}
int main() {
    guessthenumber();
    string z;
    cout << "Want to play again click type YES or else NO" << endl;
    cin >> z;
    if (z == "YES" || z == "yes") {
        guessthenumber();
    }
    else {
        return 0;
    }
}
