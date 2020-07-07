#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int throw_a_dice ()
{
	return rand () % 6 + 1;
}

/*
Rules:
1. Cift atan kazanir.
2. Toplamlari 7 ise kazanir.
3. Yoksa kaybeder.
*/

int main(int argc, char *argv[]) {
	int a, b;

	srand (time (NULL));	
	a = throw_a_dice ();
	b = throw_a_dice ();
	printf ("You throw: %d %d\n" , a , b);
	
	if (a == b)
		printf ("YOU WIN!\n");
	else if (a + b == 7)
		printf ("YOU WIN!\n");
	else
		printf ("YOU LOSE.");
	return 0;
}
