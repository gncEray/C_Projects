
//In this code I wrote a function that converts a decimal to binary.

#include <stdio.h>
#include <math.h>
#define SIZE 7

int converttobase(int m, int b, int c, int binary[])
{
	int n;
	int counter = 1;
	binary[c]=0;
	
	while(m>0)
	{
		n = m % b;
		binary[c] += n * counter; 
		m = m/b;
		counter = counter * 10;
    }

}

int main()
{
	FILE *numberfile;
	int k, number, base, binary[SIZE];
	int status;
		
	numberfile = fopen("numbers.txt", "r");
	if(numberfile==NULL)
	printf("Cannot open numberfile");
	else
	{
		k=0;
		
		status = fscanf(numberfile, "%d %d", &number, &base);
		
		while(status != EOF)
		{
		converttobase(number, base, k, binary);
	
		printf("%d is %d in base %d\n", number, binary[k], base);
		
		status = fscanf(numberfile, "%d %d", &number, &base);
		k++;
		}
	}
	fclose(numberfile);
	
	return 0;
}

