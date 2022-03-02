#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sum_d(int m)
{
	int n;
	int sum=0;
	
	while(m>0){
		n=m%10;
		sum=sum+n;
		m=m/10;
	}
	return sum;
}

int rightmostdigit(int m){
	int rightdigit;
	rightdigit = m % 10;
	return rightdigit;
}

int leftmostdigit(int m){
	int leftdigit;
	while(m>10){
		m=m/10;
	}
	leftdigit = m;
	return leftdigit;
}

int main()
{
	int number, lm_digit, rm_digit, sum_digits;
	
	do{
		printf("Enter a digit number (to stop enter a five-digit number): ");
		scanf("%d", &number);
	
		while(number<0)
		{
			printf("Enter a digit number (to stop enter a five-digit number): ");
			scanf("%d", &number);
		}
	
		
		lm_digit = leftmostdigit(number);
		rm_digit = rightmostdigit(number);
		sum_digits = sum_d(number);
	
	
			
	printf("Sum of digits: %d\n\n", sum_digits);
	
	printf("Left most digit is: %d\n", lm_digit);
	printf("Right most digit is: %d\n",  rm_digit);
	
	}while(number<10000 || number>99999);
		
	printf("\n");
	return 0;
}
