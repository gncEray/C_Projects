
//In this code, I wrote a function that gives the first letter of each column from text file.

#include <stdio.h>
#include <stdlib.h>
#define max 405


char firstletter(char acrostic[], int size)
{
	int i;
	for(i=0; i<size; i++)
	if(acrostic[i] == '\n')
	printf("%c\n", acrostic[++i]);
}

int main()
{
	FILE *textfile;
	char acrostic[max];
	int k;
	
	textfile = fopen("text.txt", "r");

	if(textfile == NULL)
	printf("Cannot open");

	else
	{
		for(k=0; k<max; k++)
		fscanf(textfile, "%c", &acrostic[k]);
		
		printf("%c\n", acrostic[0]);
		
		firstletter(acrostic, max);
	}
	fclose(textfile);
	return 0;
}
