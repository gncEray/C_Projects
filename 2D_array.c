
// This program reads double numbers from the user and insert it into an array called newar. 
//Then after every 25 numbers it asks that do you want to continue or not.

#include <stdio.h>

//This void function creates new 2D array from user's types.
void new2Darray(double ar[][25], int r, int c, double newar[35][25])
{
	int k;
	int row, col;
	char choice;
	
	for(k=0; k<35*25; k++)
	{
		//this two process declare row and column number.
		row = k / 25;
		col = k % 25;
		
		//These two states check if 25 numbers are completed or not. After reach 25 numbers, it asks for program will continue or stop.
		//For both states, the first element of array was out of these conditions. So, I seperated first element for two states.
		if(col != 0 || (col == 0 && row ==0))
		{
		scanf("%lf", &ar[row][col]);
		newar[row][col] = ar[row][col];	
		}
		else if(col == 0 && row != 0)
		{
			printf("Do you want to continue?(Y:Yes, N:No): ");
			scanf(" %c", &choice);
			if(choice == 'Y'){
			scanf("%lf", &ar[row][col]);
			newar[row][col] = ar[row][col];
			}
			if(choice == 'N')
			break;
		}	
	}
}

int main()
{
	double ar[35][25];
	double newar[35][25] = {0};
	
	new2Darray(ar, 35, 25, newar);
	
	return 0;
}
