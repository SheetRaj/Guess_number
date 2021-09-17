#include <stdio.h>
#include <time.h>

int main()
{
    int randomNumber =0;
    int guess= 0;
    int maximumNumberOfGuesses;
    time_t t;

    //Initialization of random number generator

    srand((unsigned) time(&t));

    //get the random number

    randomNumber= rand() %21;

    printf("\n This is a guessing game.");
    printf("\n I have chose a number between 0 to 20, which you must guess \n");

    for(maximumNumberOfGuesses = 5; maximumNumberOfGuesses >0; --maximumNumberOfGuesses){

        printf("\nYou have %d tr%s lest.", maximumNumberOfGuesses, maximumNumberOfGuesses==1? "Y": "ies");

        printf("\n Enter a guess: ");
        scanf("%d", &guess);

        if(guess== randomNumber)
        {
            printf("\n Congratulation you guessed it! \n");
            break;
            //return;
        }
        else if(guess<0 || guess>20){
            printf("I said the number is between 0 and 20 \n");
        }
        else if(guess< randomNumber){
            printf("Sorry, %d is wrong. my number is greater than that,\n", guess);
        }
        else if(guess< randomNumber){
            printf("Sorry, %d is wrong. my number is less than that,\n", guess);
        }
    }

    printf("\n You have had five tries and failed. The number was %d \n", randomNumber);

    return 0;
}

