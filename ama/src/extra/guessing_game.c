#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int numGen()
{
    srand(time(NULL));
    static int numberToGuess;
    numberToGuess = (rand() % 10) + 1;
    printf("The generated number is %d\n", numberToGuess);
    return numberToGuess;
}

int userInput()
{

    int guessNumber;
    printf("Guess a number between 1 and 10! ");
    scanf("%d", &guessNumber);

    return guessNumber;
}

int numberCheck()
{
    int num = -1;
    int guess = numGen();
    int i = 0;

    while (num != guess)
    {
        i++;
        num = userInput();

        if (num < guess)
        {
            printf("%d is smaller!\n", num);
        }
        else if (num > guess)
        {
            printf("%d is larger!\n", num);
        }
        else {
            printf("You guessed correctly in %d tries!", i);
        }
        
    }
    
}

int main()
{
    numberCheck();
}