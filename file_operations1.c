#include <stdio.h>
#define MAX 10

int main()
{
	char letter, sentence[MAX];
	int num_letter, number, k;
	FILE *sentence_file;
	
	num_letter = 0;
	
	sentence_file = fopen("sentence.txt", "r");
	
	if(sentence_file == NULL){
		printf("Cannot open sentence.txt files for input\n");
}
	else{
	
		printf("Enter a character: ");
		scanf("%c", &letter);
		sentence[number] = getchar();
		
		for(k=0; k<MAX; k++)
		{
			if (sentence[number] == letter)
			num_letter = num_letter + 1;
			sentence[++number] = getchar();
		}
		printf("There are %d words ending with %c", num_letter, letter);
		}
		fclose(sentence_file);
return 0;
}
