#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

struct joueur
{

    char *pseudo;
    int age;
    int score;
    int tours;
    char *main ;
};
typedef struct joueur J[10];

struct Tuile
{
    char *color;
    char *shape;
    int etat;
};
typedef struct Tuile T;


#endif // STRUCT_H_INCLUDED
