/* Objective: Create a C program that uses if-then-else statements to provide feedback on a guessed number. */
#include <stdio.h>

void guessNumber(int guess) {
    /* Added if-then-else statements to check the guessed number */
   if (guess == 555) {
         printf("Correct. You guessed it!\n");
    } else if (guess < 555) {
         printf("Your guess is too low.\n");
    } else {
         printf("Your guess is too high.\n");
   }
}
int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}