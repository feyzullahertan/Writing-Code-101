#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char print_menu ()
{
	char ch;
	
	printf ("+ Add\n");
	printf ("- Subtract\n");
	printf ("* Multiply\n");
	printf ("/ Divide\n");
	printf ("Q Quit\n");
	
	do 
		ch = getch ();
	while (!strchr ("+-*/qQ" , ch));
	
	return ch;
}

void read_two_numbers (int *p1 , int *p2)
{
	printf ("Enter number 1: ");
	scanf ("%d" , p1);
	
	printf ("Enter number 2: ");
	scanf ("%d" , p2);
}

int main(int argc, char *argv[]) {
	char op;
	int a, b, sonuc;
	int hata = 0;
	
	op = print_menu ();
	if (op != 'Q' && op != 'q') {
		read_two_numbers (&a, &b);
		switch (op) {
			case '+': 
				sonuc = a + b;
				break;
				
			case '-':
				sonuc = a - b;
				break;
				
			case '*':
				sonuc = a * b;
				break;
				
			case '/':
				if (b == 0)
					hata = 1;
				else
					sonuc = a / b;
				break;
				
			default:
				hata = 2;
		}
		
		if (hata == 0) {
			printf ("%d %c %d = %d\n" , a , op , b , sonuc);
		} else if (hata == 1) {
			printf ("Sifir ile bolme hatasi\n");
		} else if (hata == 2) {
			printf ("Bilinmeyen operator\n");
		}
	}

	return 0;
}
