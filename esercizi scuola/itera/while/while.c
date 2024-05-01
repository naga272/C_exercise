/*
ESERCIZI - ITERAZIONE IN PYTHON
Scrivere i programmi Python che risolvono i seguenti problemi, rispettando le 
regole: 
- ogni programma deve avere un commento di intestazione in cui sono elencati 
- Nome del programma e funzione
- Cognome e Nome del programmatore 
- Data
- Le variabili devono avere nomi significativi (che ne suggeriscano il significato) 
- Il codice deve essere opportunamente commentato 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int 
	// porblema 1
	base,
	i = 0,
	soglia,
	count = 0,
	// problema 2
	key,
	num = 0,
	//fine programma
	tot_es = 2,
	es_scelto,
	fine = 1;
	
void ese_1(){
	printf("\n\n--hai scelto il primo esercizio--\n");
	printf("\nbase: ");
	scanf("%d",&base);
	printf("\nsoglia: ");
	scanf("%d",&soglia);
	while(count < soglia){
		count = pow(base, i);
		i = i + 1;
	} 
	printf("%d", count);
}

void ese_2(){
	printf("\n\n--hai scelto il secondo esercizio--\n");
	i = 0;
	key = rand()%100 + 1;
	while(num != key){
		i = i + 1;
		printf("\ntentativo numero %d\n", i);
		printf("indovina il numero: ");
		scanf("%d",&num);
		if(num != key){
			printf("hai sbagliato!");
		}else{
			printf("hai indovinato al tentativo numero %d", i);
		}
	}
}

int main(){
	while(fine != 0){
		printf("\nscegli un esercizio da 1 a %d: ", tot_es);
		scanf("%d",&es_scelto);
		if(es_scelto == 1){
			/*PROBLEMA 1
				Scrivere un programma Python che chieda all’utente di introdurre una base (ad 
				esempio 7) ed una certa soglia (ad esempio 10000). Il programma calcola e 
				mostra la prima potenza della base che supera la soglia
				(nel nostro caso 16807) 
				Suggerimento: usare l’approccio forza bruta. 
			*/
			ese_1();	
		}else{
			if(es_scelto == 2){
				/*PROBLEMA 2 
					Scrivere un programma Python che realizzi il gioco “indovina un numero”:
					Il programma memorizza un numero (key), chiede all’utente di introdurre un 
					numero intero (num) e lo confronta con il numero memorizzato. Se num è 
					maggiore di key il programma dà un’indicazione all’utente e richiede 
					l’introduzione di un altro numero, lo stesso avviene se num è minore di key, se 
					invece num è uguale a key il gioco si ferma con l’output “numero indovinato!”. 
					Il programma mostra anche il numero di tentativi che l’utente ha fatto.
				*/
				ese_2();		
			}
		}
		printf("\nvuoi ripetere il programma? se si premi 1, altrimenti premi 0:");
		scanf("%d",&fine);
	}
	system("\npause");
}
