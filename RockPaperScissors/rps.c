#include <stdio.h>
#include <ctype.h>
int main(void){
    char player1;
    char player2;
    int score1 = 0;
    long score2 = 0;
    printf("Welcome to rock paper scissors\n");
    while(score1 < 5 && score2 < 5){
    printf("Player1: %i | Player2: %li\n", score1, score2);
    printf("Player1 choose your move: (R) (P) (S)\n");
    scanf(" %c", &player1);
    player1 = toupper(player1);
    printf("Player2 choose your move: (R) (P) (S)\n");
    scanf(" %c", &player2);
    player2 = toupper(player2);
    if(player1 == 'R' && player2 == 'S'){
        printf("Player1 wins\n");
        score1++;
    }
    else if (player1 == 'R' && player2 == 'P'){
        printf("Player2 wins\n");
        score2++;
    }
    else if (player1 == 'R' && player2 == 'R'){
        printf("Draw\n");
    }
    else if (player1 == 'S' && player2 == 'R'){
        printf("Player2 wins\n");
        score2++;
    }
    else if (player1 == 'S' && player2 == 'P'){
        printf("Player1 wins\n");
        score1++;
    }
    else if (player1 == 'S' && player2 == 'S'){
        printf("Draw\n");
    }
    else if (player1 == 'P' && player2 == 'R'){
        printf("Player1 wins\n");
        score1++;
    }
    else if (player1 == 'P' && player2 == 'S'){
        printf("Player2 wins\n");
        score2++;
    }
    else if (player1 == 'P' && player2 == 'P'){
        printf("Draw\n");
    }
    else {
        printf("Please input the correct value!\n");
    }
    if(score1 > 4){
        printf("Game Over!\n Player1 wins the game!!!");
    }
    else if(score2 > 4){
        printf("Game Over!\n Player2 wins the game!!!");
    }
    } 
}