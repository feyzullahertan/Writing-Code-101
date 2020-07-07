#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculate_interest (float debt, float rate, int month)
{
	return debt + debt * rate / 100 * month;
}

int main(int argc, char *argv[]) {
	printf ("%f will be %f after %d months with simple interest rate of %.2f\n" , 1000.0 , calculate_interest (1000, 1.3, 4) , 4, 1.3);
	return 0;
}
