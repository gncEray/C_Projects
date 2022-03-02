//This program finds employee's id which has the work years as given input.

#include <stdio.h>
#define size 5

int search(int ar[], int max, int num)
{
	int k;

	for(k=0; k<max; k++)
	if(ar[k] == num)
	return (k);
	
	return -1;
}

int main()
{
	FILE *yearsfile;
	FILE *idfile;
	int years[size], ids[size];
	int k, num, n;
	
	yearsfile = fopen("workyears.txt", "r");
	if(yearsfile == NULL)
	printf("NOT EXIST");
	else
	{
		for(k=0; k<size; k++)
		fscanf(yearsfile, "%d", &years[k]);
		
		printf("Enter the year which you want to search: ");
		scanf("%d", &num);
		
		n = search(years, size, num);
		
		idfile = fopen("employee_id.txt", "r");
		
		for(k=0; k<size; k++)
		fscanf(idfile, "%d", &ids[k]);
		
		if(n != -1)
		printf("First employee id who has worked for %d years is %d", num, ids[n]);
		else
		printf("There is no worker who worked that years.");


	}
fclose(yearsfile);
fclose(idfile);

return 0;
}
