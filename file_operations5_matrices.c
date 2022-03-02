
//This program read a file and swap rows of matrix which is in file with user's choice. 

#include <stdio.h>

int main()
{
	FILE *matrixfile;
	int r, c, row_one, row_two; 
	double ar[7][4], tempone[4], temptwo[4];
	
	matrixfile = fopen("matrix.txt", "r");
	if(matrixfile==NULL)
	printf("matrix.txt cannot open!");
	else
	{
		for(r=0; r<7; r++)
			for(c=0; c<4; c++)
			fscanf(matrixfile, "%lf", &ar[r][c]);
		
		printf("The contents of the array is:\n");
		for(r=0; r<7; r++){
			for(c=0; c<4; c++)
			printf("%.1f\t", ar[r][c]);			
		printf("\n");
		}
		
		printf("\nEnter two row indexes to swap: ");
		scanf("%d %d", &row_one, &row_two);
		
		while(row_one<0 || row_two>6 || row_two<0 || row_one>6){
			printf("Enter two row indexes to swap: ");
			scanf("%d %d", &row_one, &row_two);
		}
		
		for(c=0; c<4; c++){
			tempone[c] = ar[row_one][c];
			temptwo[c] = ar[row_two][c];
		}
	
		for(c=0; c<4; c++){
			ar[row_one][c] = temptwo[c];
			ar[row_two][c] = tempone[c];
		}
		
		printf("The contents of the array AFTER the swap operation:\n");
		for(r=0; r<7; r++){
			for(c=0; c<4; c++)
			printf("%.1f\t", ar[r][c]);
		printf("\n");		
		}
	fclose(matrixfile);
	}	
	return 0;
}
