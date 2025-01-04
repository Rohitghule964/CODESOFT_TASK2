#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;


int generateRandomNumber(int lower_no, int upper_no) {
    return lower_no + rand() % (upper_no - lower_no + 1);
}


void playGame() {
    int lower_no = 1, upper_no = 100; 
    int randomNumber = generateRandomNumber(lower_no, upper_no);
    int userGuess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between " << lower_no << " and " << upper_no << ".\n";
    cout << "Can you guess what it is?\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess == randomNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        } else if (userGuess < randomNumber) {
            cout << "very low! Try again.\n";
        } else {
            cout << "very high! Try again.\n";
        }
    }
}


void displayMenu() {
    cout << "\nNumber Guessing Game Menu:\n";
    cout << "1. Play Game\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
}


int main() {
    srand(time(0)); 
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                playGame();
                break;
            case 2:
                cout << "Exiting... Thanks for playing!\n";
                return 0;
            default:
                cout << "UNKNOWN choice! Please Retry.\n";
        }
    }

    return 0;
}
