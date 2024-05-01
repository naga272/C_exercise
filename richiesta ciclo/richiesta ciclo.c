#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	
	while (a != b) {
		c = c + 1;
		printf("\nnumero: %d", c);
		printf("\nvuoi continuare? se si' premi 0 altimenti premi 1: ");
		scanf("%d", &a); 
	}
	system("pause");
}
