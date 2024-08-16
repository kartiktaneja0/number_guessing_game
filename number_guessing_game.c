// 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int ran = (rand() % 100) + 1;
    int guess = 0;
    int guessno = 0;
    printf("A random number has been selected, please guess it \n");
    for (int i=1;i<=100;i++) {
        guessno+=1;
        printf("GUESS %d : ",i);
        scanf("%d", &guess);
        if (guess==ran) {
            break;
        }
        else {
            if (guess>ran) {
                printf("Oh No! The Number Is Smaller Than %d, Try Again! \n", guess);
            }
            else {
                printf("Oh No! The Number Is Bigger Than %d, Try Again! \n", guess);
            }
        }
    }
    printf("Congratulations! You won the gameee! \n");
    int points = (100-guessno)*100;
    printf("You Guessed it in %d chances, You scored %d points out of %d!", guessno, points, 100*100);
    return 0;
}