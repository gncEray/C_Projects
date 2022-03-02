// This program reads a file and display an English word which are in each column of file.

#include <stdio.h>

int main()
{
	FILE *wordfile;
	int i, j, k, word, col;
	char table[5][12];
	
	wordfile = fopen("words.txt", "r");
	if(wordfile==NULL)
	printf("words.txt cannot open!");
	else
	{
		for(i=0; i<5; i++){
			for(j=0; j<12; j++)
			fscanf(wordfile, " %c", &table[i][j]);
		}
			printf("Which word do you want to display?\n");
			scanf("%d", &word);
			
			while(word<1 || word>12){
			printf("NOT AVAILABLE!!\n");
			printf("Which word do you want to display?\n");
			scanf("%d", &word);
		}
			col = word - 1;
			
			for(k=0; k<5; k++)
			printf("%c", table[k][col]);
	}
	fclose(wordfile);
	
	return 0;
}
