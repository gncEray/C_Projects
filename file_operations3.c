#include <stdio.h>
#define SIZE 29


int main()
{
	FILE *infile;
	FILE *outfile;
	
	char word[SIZE];
	int length=0, k;
	
/*	infile = fopen("mytext.txt", "w");
	fprintf(infile, "And it does just what you want it to");
	fclose(infile); */
	
	outfile = fopen("mytext.txt", "r");

	if(outfile == NULL)
	printf("File is not available");
	else
	{
		for(k=0; k<SIZE; k++)
		fscanf(outfile, "%c", &word[k]);
		
		printf("The reverse of sentence: ");
		for(k=SIZE-1; k>=0; k--)
		printf("%c", word[k]);
	}
fclose(outfile);

return 0;
}
