#include <stdio.h>

int main()
{
	
	int i, j, n;
	do{
		printf("Enter a number (1-9 or non-positive to stop): ");
		scanf("%d", &n);
		
		while (n>9) {
        printf("Enter a number (1-9 or non-positive to stop): ");
        scanf("%d",&n);
    }
		
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				if(j<=i)
				printf("%d", j);
				else
				printf("*");
				}
	printf("\n");
}
	}while(n>0);

return 0;
}
