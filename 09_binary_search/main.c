#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int binary_search (int * arr, int array_size, int n)
{
	int middle;
	
	printf ("array_size: %d\n" , array_size);
	
	if (array_size <= 0)
		return -1;
		
	if (array_size % 2 == 0)
		middle = array_size / 2;
	else
		middle = array_size / 2 + 1;
		
	if (arr [middle - 1] == n)
		return middle;
	else if (arr [middle - 1] > n)
		return binary_search (arr , middle - 1 , n);
	else
		return binary_search (arr + middle , array_size - middle  , n); 
}

int main(int argc, char *argv[]) {
	int dizi [10] = {-7, -2, -1, 0, 4, 5, 8, 23, 45, 46};
	int x, result;
	
	printf ("Enter a number: ");
	scanf ("%d" , &x);
	result = binary_search (dizi, 10, x);
	if (result == -1)
		printf ("NOT FOUND!\n");
	else
		printf ("Found: %d\n" , result);
	return 0;
}
