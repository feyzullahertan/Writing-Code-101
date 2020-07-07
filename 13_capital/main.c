#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char yazi [100];
	char buyuk [100];
	int i;
	
	scanf ("%s" , yazi);
	for (i = 0; i < strlen (yazi) ; i++) {
		buyuk [i] = toupper (yazi [i]);
	}
	buyuk [i] = '\0'; 
	printf ("%s" , buyuk);
	return 0;
}
