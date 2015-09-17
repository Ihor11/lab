#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void in(void), out(void);
char menu(void);

int main(void) {
	char choice;
	do {
		choice = menu();
		switch(choice) {
			case 'a': in(); break;
			case 'o': out(); break;
		}
	} while (choice!='q');
	return 0;
}

char menu(void) {
	char ch;
	do {
	printf("(A)dd, (O)utput, or (Q)uit: ");
	ch = tolower(getche());
	printf("\n");
	} while(ch != 'q' && ch != 'a' && ch != 'o');
	return ch;
}

void in(void)
{
FILE *fp;
char Group[8], Subj [20], Hours[4];

if((fp=fopen("Missed_Classes.txt", "a")) == NULL) {
	printf("Cannot open directory file.");
	exit(1);
}
printf("Enter Group, Subject and Number of missed hours: \n");
scanf("%s %s %s", &Group, &Subj, &Hours);
fscanf(stdin, "%*c"); 

fprintf(fp,"%s %s %s\n", &Group, &Subj, &Hours);
fclose(fp);
}

void out(void){
FILE *fp;
char Group[8], Subj [20], Hours[4];

if((fp=fopen ("Missed_Classes.txt","r")) == NULL) {
printf("Cannot open directory file.");
exit(1);
}
while(!feof(fp)) {
	fscanf(fp,"%s %s %s\n", &Group, &Subj, &Hours);	
	printf("%s - %s - %s\n", &Group, &Subj, &Hours);	
}
fclose(fp);
}
