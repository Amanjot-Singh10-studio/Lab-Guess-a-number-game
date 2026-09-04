#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int main() {

    int turns = 0;
    int guess; 
    char userName[20]; 

    printf("Hi, what's your name? ");
    scanf("%s", userName);

    printf("Hi %s. Let's play a game!\n", userName);

    srand(time(NULL));
    int correct = rand() % 100 + 1;

    int keepGoing = TRUE;

    while(keepGoing) {

        printf("Turn %d) Your guess: ", turns + 1);
        scanf("%d", &guess);

        turns = turns + 1; 

        if(guess > correct) {
            printf("Too high! Try different number\n");
        }
        else if(guess < correct) {
            printf("Too low! Try different number\n");
        }
        else {
            printf("You got it!\n");
            keepGoing = FALSE;
        }
    }

    printf("You took %d turns.\n", turns);
    
    if(turns < 7) 
	printf("Very good!\n"); 
    else if(turns > 7)
	printf("Poor performance!\n"); 

    return 0;
}
