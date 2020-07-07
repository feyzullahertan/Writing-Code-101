#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

union Data {
	int i;
	float f;
	char str[20];
};

int main(int argc, char *argv[]) {
	union Data d;
	
	d.i = 120;
	d.f = 3.14;
	strcpy (d.str , "Hello World!");
	
	printf ("d.i: %d\n" , d.i);
	printf ("d.f: %f\n" , d.f);
	printf ("d.str: %s\n" , d.str);
	return 0;
}
