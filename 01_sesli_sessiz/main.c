#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	
	printf ("Enter a letter: ");
	scanf ("%c" , &ch);
	
	ch = toupper (ch);
	
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf (" is a vowel.\n");
	else
		printf (" is a consonant.\n");
	
	return 0;
}
