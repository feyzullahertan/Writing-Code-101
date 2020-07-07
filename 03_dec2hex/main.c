#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* I have modified this program using char array to reverse the output order. */

void print_hex_digit (int kalan)
{
	if (kalan < 10)
		printf ("%d" , kalan);
	else if (kalan == 10)
		printf ("A");
	else if (kalan == 11)
		printf ("B");
	else if (kalan == 12)
		printf ("C");
	else if (kalan == 13)
		printf ("D");
	else if (kalan == 14)
		printf ("E");
	else if (kalan == 15)
		printf ("F");
}

int main(int argc, char *argv[]) {
	int n, kalan;
	
	printf ("Enter the decimal number: ");
	scanf ("%d", &n);
		
	while (n > 16) {
		kalan = n % 16;
		print_hex_digit (kalan);		
	
		n = n / 16;
	}
	print_hex_digit (n);
	return 0;
}


