#include <stdio.h>

int main() {
    int choice;
    int guess;
    const int correctNumber = 69;

    do {
    
    // Initiating a do while loop for the menu
        printf("\n=== Main Menu ===\n");
        printf("1. Start Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Start the game
            printf("\n--- Guess the Number Game ---\n");
            printf("Guess the number between 1 and 100!\n");

            do {
                printf("Enter your guess: ");
                scanf("%d", &guess);
                //Guessing the correct number statements

                if (guess < correctNumber) {
                    printf("Too low! Try again.\n");
                } else if (guess > correctNumber) {
                    printf("Too high! Try again.\n");
                } else {
                    printf("Congratulations! You guessed the correct number.\n");
                    return 0;
                }
            } while (guess != correctNumber);
            
        } else if (choice == 2) {

            // Exiting the game
            printf("Exiting the program. Goodbye!\n");
            return 0;
        } else {
            printf("Invalid choice. Please select 1 or 2.\n");
        }

    } while (choice != 2);

    return 0;
}
