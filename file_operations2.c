#include <stdio.h>

void fourstars(int n)
{
	int i;
	for(i=1; i<=n; i++)
	printf("****\n");
}

void onestar(int n)
{
	int i;
	for(i=1; i<=n; i++)
	printf("*\n");
}

void threeblanksonestar(int n)
{
	int i;
	for(i=1; i<=n; i++)
	printf("   *\n");
}

void startwoblanksstar(int n)
{
	int i;
	for(i=1; i<=n; i++)
	printf("*  *\n");
}

int main()
{	
	int k, numbers[5];
	FILE *numberfile;
	
	numberfile = fopen("number_file.txt", "r");
	
	if(numberfile == NULL)
		printf("IT IS NOT AVAILABLE");
	else{
	for(k=0; k<5; k++){
	fscanf(numberfile, "%d", &numbers[k]);
	switch(numbers[k])
	{
	case(1):
	 onestar(7);
	 printf("\n");
	break;
	case(2):
	 fourstars(1);
	 threeblanksonestar(2);
	 fourstars(1);
	 onestar(2);
	 fourstars(1);
	 printf("\n");
	break;
	case(3):
	 fourstars(1);
	 threeblanksonestar(2);
	 fourstars(1);
	 threeblanksonestar(2);
	 fourstars(1);
	 printf("\n");
	break;
	case(4):
	 startwoblanksstar(3);
	 fourstars(1);
	 threeblanksonestar(3);
	 printf("\n");
	break;
	case(5):
	 fourstars(1);
	 onestar(2);
	 fourstars(1);
	 threeblanksonestar(2);
	 fourstars(1);
	 printf("\n");
	break;
	case(6):
	 fourstars(1);
	 onestar(2);
	 fourstars(1);
	 startwoblanksstar(2);
	 fourstars(1);
	 printf("\n");
	break;
	case(7):
	 fourstars(1);
	 threeblanksonestar(6);
	 printf("\n");
	break;
	case(8):
		fourstars(1);
		startwoblanksstar(2);
	 	fourstars(1);
		startwoblanksstar(2);
		fourstars(1);
		printf("\n");
	break;
	case(9):
		fourstars(1);
		startwoblanksstar(2);
	 	fourstars(1);
	 	threeblanksonestar(2);
	 	fourstars(1);
	 	printf("\n");
	break;
	case(0):
		fourstars(1);
		startwoblanksstar(5);
		fourstars(1);
		printf("\n");
	break;
	default:
		printf("IT IS NOT A ONE DIGIT NUMBER");
}
}
	
fclose(numberfile);
}
	return 0;
}
