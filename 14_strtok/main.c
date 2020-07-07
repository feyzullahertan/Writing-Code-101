#include <stdio.h>
#include <stdlib.h>
#define TOKEN "."
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *pStr;
	char str [80] = "www.google.com";
	char *token;
	
	pStr = str;
	token = strtok (pStr , TOKEN);
	while (token != NULL) {
		printf ("%s\n" , token);
		pStr = pStr + strlen (token) + 1;
		token = strtok (pStr , TOKEN);
	}
	return 0;
}
