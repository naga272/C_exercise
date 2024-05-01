/*crea un programma che chiede all'utente
il prezzo di più prodotto e che li sommi
mostrando il prezzo finale
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //DICHIARAZIONE VARIABILI IN LOCALE
    int n_prodotti;
    int x = 0; 
    float prodotto;
    float somma = 0;
    
    //INIZIO PROGRAMMA
    printf("quanti prodotti ");
    printf("vuoi inserire? ");
    scanf("%d", &n_prodotti);
    while (x != n_prodotti){
          printf("\nprezzo prodotto: ");
          scanf("%.2f", &prodotto);
          somma = somma + prodotto;
          x = x + 1;
          if (x == n_prodotti){
            printf("vuoi aggiungere");
            printf("altri prodotti?");
            printf("se sì premi 0");
            printf("altrimenti premi 1");
            scanf("%d", &x);
            if (x == 1){
                x = n_prodotti;
            }
        }
    }
    printf("\nprezzo finale: %.2f", somma);
    system("pause");
    return 0;	
}
