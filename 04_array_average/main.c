#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float average (int *arr, int array_count)
{
	int sum, i;
	
	sum = 0;
	for (i = 0; i < array_count ; i++)
		sum += arr [i];
		
	return (sum * 1.0) / array_count;
}

int main(int argc, char *argv[]) {
	int dizi [5];
	int i;
		
	for (i = 0; i < 5; i++)
		scanf ("%d" , &dizi [i]);
		
	printf ("Average: %f\n" , average (dizi , 5));
	
	return 0;
}
