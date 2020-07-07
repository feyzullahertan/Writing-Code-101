#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float find_power (float number, int power)
{
	float result = 1;
	int i;

	for (i = 1; i<= power; i++)
		result = result * number;
		
	return result;	
}

int main(int argc, char *argv[]) {
	float n;
	int k;
	
	printf ("Enter a number: ");
	scanf ("%f" , &n);
	
	printf ("Enter its power: ");
	scanf ("%d" , &k);
	
	printf ("%f ^ %d = %f" , n , k , find_power (n, k));
	
	return 0;
}
