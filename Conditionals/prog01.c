#include <stdio.h>

int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	if(num1%2)
		printf("%d is odd\n", num1);
	else
		printf("%d is even\n", num1);
	
	if(num2%2)
		printf("%d is odd\n", num2);
	else
		printf("%d is even\n", num2);
		
	return 0;
}
