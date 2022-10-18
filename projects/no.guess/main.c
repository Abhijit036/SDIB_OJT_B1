#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 1000 + 1; // It generates a number b/w the 1 to 1000
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher the number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}