#include "fonctions.h"


int main()
{



    printf("\t\t   ****************************************\n");
    printf("\t\t   * Bienvenue à Qwirkle !*\n \n \n \n");




    int choice;

    printf("1- consulter les regles du jeu\n");
    printf("2- lancer une partie \n");
    printf("3- quitter \n");

    printf("__________________|\n");
    scanf("%d", &choice);
    printf("_____________________|\n");


    switch (choice)
    {
    case 1:

        printf("\t\t   ****************************************\n");
        printf("1- Consulter les regles du jeu : \n");
        printf("\t\t   ****************************************\n");
        printf("\t\t   *A la fin d un tour,Si les joueurs decident d arreter.*\n");
        printf("\t\t   *le jeu propose d enregistrer toutes les infos necessaires pour une reprise ulterieure ou pas.*\n");
        printf("\t\t   * Quand la pioche ne contient plus de tuiles, le jeu s arrete immediatement a la fin du tour et les 6 points de bonus ne sont pas attribues.*\n");
        printf("\t\t   * Le joueur ayant le plus grand nombre de points remporte la partie.*\n");
        printf("\t\t   *l ordinateur affiche le pseudo et le score de tous les joueurs de la partie.*\n");
        printf("\t\t   ****************************************\n");


        break;

    case 2:

        printf("2- let's start the game \n");

        struct joueur J;
        int GameMode;
        int number_of_players;
        saisire_cordonnees(&J.pseudo, &J.age, &GameMode, &number_of_players);
//pioche au hazard

        system("cls");
//plateau


        int i;
        for (i = 1; i <= number_of_players; i++)
        {
            draw_random_tuiles(i);
        }

        init_tuiles();

        for (i = 1; i <= number_of_players; i++)
        {
            draw_random_tuiles(i);
        }

//plateau
for(i=0 ;i<1 ;i++){

    printf("joueur%s%s \n ",&J.pseudo,&number_of_players);
    printf("main \n",&J.main);
    printf("score \n",&J.score);
    printf("tour\n",&J.tours);
}












        break;
    case 3:
        printf("3- thank you for visiting Qwirkle \n");

        break;



    }

    return 0;

}
