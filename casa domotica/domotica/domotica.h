#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>      // gestione errori con macro checker
#include <sys/time.h>


/*
    *
    * Il corpo della funzione logging si trova all'interno del file log.c
    *
*/
void logging(const char *, const char *) __attribute__((optimize("03")));


#ifndef checker
    extern void _exit(register int);
    #define checker(x)                                                  \
        if(x){                                                          \
            printf("errore numero %d: %s\n", errno, strerror(errno));   \
            _exit(errno);                                               \
        } 
#else
    #error, "macro checker already defined"
#endif


#define True 1
#define False 0


struct Appartamento* appartamento(void) __attribute__((optimize("03")));
struct Appartamento{
    struct Elettrodomestico* vettore[50]; 
    void      (*add)           (struct Appartamento*, struct Elettrodomestico*);
    void      (*remove)        (struct Appartamento*, struct Elettrodomestico*);
    double    (*potenza)       (struct Appartamento*);
    void      (*accendiTutti)  (struct Appartamento*);
    void      (*spegniTutti)   (struct Appartamento*);

    char*     (*__str__)   (struct Appartamento*);
    void      (*__del__)   (struct Appartamento*);
};


struct Elettrodomestico* elettro    (char [], short unsigned int, double) __attribute__((optimize("03")));
struct Elettrodomestico{
    unsigned int id;
    unsigned short int status;
    char        nome[30];
    double      potenzaWatt;
    double      (*potenza)   (struct Elettrodomestico*);
    char*       (*__str__)   (struct Elettrodomestico*);
    void        (*__del__)   (struct Elettrodomestico*);
};
