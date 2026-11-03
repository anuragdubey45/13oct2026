#include<stdio.h>
int main()
{
    int screat=25;
    int guess ;
    int attempts=0;
    printf("=====NUMBER GUESSING GAME===== \n");
    printf("guess a number between 1 and 50:");
    scanf("%d",& guess);
    while(guess !=screat)
    { attempts++;
        if(guess > screat)    
        {
            printf("too high! try again.\n");
        }
        else
        {
            printf("too low! try again.\n");
        }
        printf("\nguess a number between 1 and 50:");
        scanf("%d", &guess);
    }
attempts++;
printf("\ncongratulation! you guessed the correct number.\n");
printf("total attempts %d\n", attempts);
printf("===== GAME OVER =====");
return 0;
    } 