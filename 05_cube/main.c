#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int cube (int n)
{
	return n * n * n;
}
int main(int argc, char *argv[]) {
	printf ("4^3 = %d" , cube (4));
	return 0;
}

