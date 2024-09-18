//Daniel Ramos
//csc-321

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){
	int x = 0;
	double y = 0.0;
	char c;
	bool z;
	//extras for boolean comparison
	int temp;

	printf("Enter an integer: ");
	scanf("%d", &x);

	if(x>3)
	{
		printf("You input a number larger than 3 \n");
	}
	else if(x==3)
	{
		printf("You input 3 \n");
	}
	else
	{
		printf("You entered a number less than 3 \n");
	}

	printf("Enter a double: ");
	scanf("%lf", &y);

	if(y>6.0)
	{
		printf("You input a number larger than 6.0 \n");
	}
	else if(y==6.0)
	{
		printf("You input 6.0 \n");
	}
	else
	{
		printf("You input a number less than 6.0 \n");
	}

	printf("Enter a character: ");
	scanf("\n%c", &c);

	if(c>'C')
	{
		printf("You input a character greater than 'C' \n");
	}
	else if(c=='C')
	{
		printf("You input 'C' \n");
	}
	else
	{
		printf("You input a character less than 'C' \n");
	}

	printf("Enter a boolean True(1) or False(0): ");
	scanf("%d", &temp);
	z = temp;

	if(z==true)
	{	
		printf("You input boolean true \n");
	}
	else
	{
		printf("Your input isnt true \n");
	}



	return EXIT_SUCCESS;

}
