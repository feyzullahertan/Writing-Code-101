#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double dizi [10];
	double n;
	int i;
	double min, max;
	
	for (i = 0 ; i < 10 ; i++) {
		scanf ("%lf" , &n);
		dizi [i] = n;
		printf ("%lf" , dizi [i]);	
	}	
	
	min = dizi [0];
	max = dizi [0];
	
	for (i = 1; i < 10 ; i++) {
		if (dizi [i] > max)
			max = dizi [i];
		if (dizi [i] < min)
			min = dizi [i];
	}
	printf ("Min: %lf Max: %lf\n" , min , max);	
	return 0;
}
