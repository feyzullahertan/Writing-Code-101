#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	
	ch = getch ();
	/* ch = toupper (ch); de kullanýlabilir. */
	switch (ch) {
		case 'a' :
		case 'A' : printf ("Apple");
			break;
			
		case 'B' : printf ("Book");
			break;

		case 'C' : printf ("Camel");
			break;
			
		default   : printf ("???");
	}
	printf ("\n");
	return 0;
}
