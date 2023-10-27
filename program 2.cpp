// include the necessary libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// define a function that generates a random number between 1 and 100
int generate_random_number() {
  // initialize the random seed
  srand(time(0));
  // return a random number between 1 and 100
  return rand() % 100 + 1;
}

// define a function that asks the user to guess the number and provides feedback
void guess_the_number(int number) {
  // declare a variable to store the user's guess
  int guess;
  // declare a variable to count the number of attempts
  int attempts = 0;
  // use a loop to repeat until the user guesses the correct number
  do {
    // prompt the user to enter a guess
    cout << "Enter your guess (between 1 and 100): ";
    // read the user's input
    cin >> guess;
    // increment the number of attempts
    attempts++;
    // check if the guess is too high, too low, or correct
    if (guess > number) {
      cout << "Your guess is too high. Try again.\n";
    } else if (guess < number) {
      cout << "Your guess is too low. Try again.\n";
    } else {
      cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
    }
  } while (guess != number); // end the loop when the user guesses the correct number
}

// define the main function
int main() {
  // generate a random number
  int number = generate_random_number();
  // call the function to ask the user to guess the number
  guess_the_number(number);
  // return 0 to indicate successful termination
  return 0;
}

