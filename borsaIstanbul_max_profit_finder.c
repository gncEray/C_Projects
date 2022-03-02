
// This program finds the max profit in Borsa Istanbul with a days interval which is given by user. 

#include <stdio.h>
#define SIZE 100

//Calculate sum of netchange in days interval
double sum(int ar[], int a, int lastday)
{
	int k;
	double summation = 0;
	
	for(k=a; k<lastday; k++){
		summation += ar[k];
	}
	return summation;
}

//Calculate average with sum divide by days
double avg(int ar[], int a, int days, int lastday)
{
	double summation;
	double average;
	summation = sum(ar, a, lastday);
	
	average = summation / days;
	
	return average;
}

//This function finds the maximum value of profit with given days internal
int maximum(int ar[], int size, int days) 
{
	double max;
	int k, m;
	int max_ind = 0;
	double summation = 0;
	
	max = sum(ar, 0, days);
	
	for(k=days; k<size; k++)
	{
		summation = sum(ar, k-days, k);
		if(summation > max)
		{
			max = summation;
			max_ind = k-days;
		}
	}
return max_ind;
}

int main()
{
	int i, days, firstday, lastday;
	double summation;
	double average;
	int netchange[SIZE];
	FILE *netchanges;
	
	netchanges = fopen("netchange.txt", "r");
	if(netchanges == NULL)
	printf("NOT AVAILABLE");
	else
	{
		printf("How many days do you want to looking for?: ");
		scanf("%d", &days);
		
		for(i=0; i<SIZE; i++)
		fscanf(netchanges, "%d", &netchange[i]);
	
		firstday = maximum(netchange, SIZE, days);
		
		lastday = firstday + days;
		
		summation = sum(netchange, firstday, lastday);
		average = avg(netchange, firstday, days, lastday);
		
		printf("Buy before day %d (after the day %d ends) sell after day %d (before the day %d begins).\n", firstday+1, firstday, lastday++, lastday);
		printf("Sum of these %d days: %.f\n", days, summation);
		printf("Average value for these %d days: %.2f\n", days, average);	
	}
	fclose(netchanges);
	return 0;
}
