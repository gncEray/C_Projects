#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int n_fact(int m, int n, int fact){
	fact=1;
	for(n=1; n<=m; n++)
	fact= fact*n;
	return (fact);
}
int summation(int m, int n){
	int odd=1, even=0, sum=0;
	for(m=1; m<=n; m++)
	sum+=m;
	return (sum);
}

int main(){
	int i, n, output;
	do{
	for(i=-5; i<=n; i++){
		if(n<=0)
		output=pow(n,5) + n_fact(abs(n));
		else if(n>=1 && n<10)
		output=n_fact(n)-120;
		else if(n>=10 && n % 2==0)
		output=summation(n);
		else
		output=summation(n);
	}
}while(n>=-5);
	
	printf("Enter n (>= -5): ");
	scanf("Result of calculation: %d", &output);
	return 0;
}




