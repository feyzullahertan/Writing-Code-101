#include <stdio.h>
#include <stdlib.h>

#define STUDENT_NUMBER 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	char name[30];
	int grade;
} Student;

Student read_note ()
{
	Student s;
	
	printf ("Enter name: ");
	scanf ("%s" , s.name);
	printf ("Enter grade: ");
	scanf ("%d" , &s.grade);
	
	return s;
}

void print_note (Student s)
{
	printf ("%s: %d\n" , s.name , s.grade);
}

int write_binary (Student *student)
{
	FILE *fout;
	int i;
	
	fout = fopen ("deneme.bin", "wb");
	if (fout == NULL) {
		printf ("File error!\n");
		return 0;
	}
	for (i = 0; i < STUDENT_NUMBER; i++)
		fwrite (student + i, sizeof(Student), 1, fout);
	fclose (fout);
	return 1;

}

int write_text (Student *student)
{
	FILE *fout;
	int i;
	
	fout = fopen ("deneme.txt", "wt");
	if (fout == NULL) {
		printf ("File error!\n");
		return 0;
	}
	for (i = 0; i < STUDENT_NUMBER; i++)
		fprintf (fout, "%s: %d\n", student [i].name , student [i].grade);
	fclose (fout);
	return 1;
}

int main (int argc, char *argv[])
{
	int i, j;
	Student tmp;
	Student my_class [STUDENT_NUMBER];
	
	for (i = 0; i < STUDENT_NUMBER; i++)
		my_class [i] = read_note ();
		
	for (i = 0; i < STUDENT_NUMBER; i++)
		print_note (my_class [i]);
		
	for (i = 0; i < STUDENT_NUMBER - 1 ; i++) {
		for (j = 0; j < STUDENT_NUMBER - i - 1; j++) {
			if (my_class [j].grade < my_class [j+1].grade) {
				tmp = my_class [j];
				my_class [j + 1] = my_class [j];
				my_class [j] = tmp;
			}
			// swap
		}
	}
	
	
	write_text (my_class);
	write_binary (my_class);
	
	return 0;
}
