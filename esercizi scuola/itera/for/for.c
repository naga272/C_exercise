#include <stdio.h>
#include <stdlib.h>

int	i;
int a;

void es_1(){
	printf("\n0-10\n");
	for(i = 0; i < 11; i++){
		printf("\n%d", i);
	}
}

void es_2(){
	printf("\n\n10-0\n");
	for(a = 10; a >= 1; a--){
		printf("\n%d", a);
	}
}

int main(){
	es_1();
	printf("\n\n");
	es_2();	
	printf("\n");
	system("pause");
}
