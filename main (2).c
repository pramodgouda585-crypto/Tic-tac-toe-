/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));
    secret = rand() % 100 + 1; 

    printf("Welcome to Guess the Number Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high! Try again.\n");
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
