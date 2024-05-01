/*sommare i numeri dispari e pari separatamente (usare ciclo for)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int 
		num,
		disp = 0,
		pari = 0,
		i;
	for(i = 0; i < 10; i++){
		printf("inserire numero: ");
		scanf("%d",&num);
		if(num % 2 == 0){
			pari = pari + num;
		}else{
			disp = disp + num;
		}
	}
	printf("\nla somma dei numeri pari e: %d , la somma dei numeri dispari e: %d\n", pari, disp);
	system("pause");
}
