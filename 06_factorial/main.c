#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial (int n)
{
	int i, result;
	
	if (n < 0)
		return 0; /* error */
		
	result = 1;
	for (i = 1; i <= n; i++)
		result = result * i;
		
	return result;
}

int main(int argc, char *argv[]) {
	printf ("5! = %d" , factorial (5));
	return 0;
}
