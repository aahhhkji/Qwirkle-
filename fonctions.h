#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAXE_TILES_MODE_1 108
#define MAXE_TILES_MODE_2 36
#include<time.h>

#define CASES 312
#define  LIGNE 12
#define COLONNE 26
#define  ROWS 12
#define COLUMNS 26

#include<windows.h>
#define TUILE_NUMBER 6
#define SHAPE_NUMBER 6
#define COLOR_NUMBER 6
#include "struct.h"
#endif // FONCTIONS_H_INCLUDED


//include





//fonction le nombre de tiles dans le sac selon le mode choisis
//for mode 1(normal)
void iniTilesBag1()
{
    int TilesBag[MAXE_TILES_MODE_1 ];

    int i;
    for(i=0; i<MAXE_TILES_MODE_1; i++)
    {

        TilesBag[i]=i%6;
    }


}

//fonction le nombre de tiles dans le sac selon le mode choisis
//for mode 1(normal)
void iniTilesBag2()
{
    int TilesBag[MAXE_TILES_MODE_2 ];

    int i;
    for(i=0; i<MAXE_TILES_MODE_2; i++)
    {

        TilesBag[i]=i%6;
    }


}
void saisire_cordonnees(char *pseudo[50],int *age,int *GameMode,int *number_of_players)
{

//saisie du pseudo + l'age
//mode 1


    printf("Enter Game Mode (1 for Normal ,2 for individual) : ");
    scanf("%d", GameMode);
    if (*GameMode == 1)
    {
        printf("Enter number of players (2, 3 or 4) : ");
        scanf("%d", number_of_players);
        if (*number_of_players == 2 || *number_of_players == 3 || *number_of_players == 4)
        {
            printf("You've selected Normal mode :\n");

            do
            {
                for (int j = 0; j<  *number_of_players; j++)
                {
                    printf("Enter player %d information :\n", j + 1);
                    printf("Pseudo : ");
                    scanf("%s", pseudo);
                    printf("Age : ");
                    scanf("%d", &age);
                    if (age >= 6)
                    {
                        printf("Welcome, %s! You are old enough to play Qwirkle. Let's start !\n", pseudo);
                    }
                    else
                    {
                        printf("I'm afraid %s. This game is not for your age.\n", pseudo);
                    }

                }

            }
            while(age<6);





        }
        else
        {
            printf("Invalid number of players\n");
        }

    }
    else
    {
        printf("you've choosen individual mode\n");
        printf("we are sorry this mode is not build yet");
    }

}




const char *colors[] = {"rouge", "violet", "vert", "gris", "blanc", "rose"};
const char *shapes[] = {"carré", "cercle", "coeur", "triangle", "losange", "trapèze"};

T tuiles[TUILE_NUMBER];



void draw_random_tuiles(int player_number)
{
    srand(time(0));
    int i, tuile_index;
    printf("Player %d draws: ", player_number);
    for (i = 0; i < 6; i++)
    {
        tuile_index = rand() % TUILE_NUMBER;
        T tuile = tuiles[tuile_index];
        printf("%s %s ", tuile.shape, tuile.color);
    }
    printf("\n");
}
//pioche au hazard
void init_tuiles()
{
    int i;
    for (i = 0; i < TUILE_NUMBER; i++)
    {
        tuiles[i].shape = shapes[i % SHAPE_NUMBER];
        tuiles[i].color = colors[i % COLOR_NUMBER];
    }
}



//tableau pour lchaque joueur








int TAB[4];


void afficherTableau(char tableau[COLONNE][LIGNE])
{
    int i, j;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 26; j++)
        {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}







