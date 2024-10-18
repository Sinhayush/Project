#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guess = 0;
    int guessed;

    do
    {
        printf("Guess the number :");
        scanf("%d", &guessed);

        if (guessed > randomnumber)
        {
            printf("Lower number please!\n");
        }
        else if  (guessed < randomnumber)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("CONGRATIULATIONS!YOU HAVE GOT IT RIGHT");
        }
        no_of_guess++;

    } while (guessed != randomnumber);

    printf("You guessed the number in %d number of guesses.", no_of_guess);

    return 0;
}