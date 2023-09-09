#include <stdio.h>

int main ()
{
	int num1;
	int num2;
	int sum;

	printf("Enter the numbers: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 % 2 ==0 && num2 % 2 ==0){
		sum = num1 + num2;
		printf("Both numbers are even, so their sum is: %d \n", sum);
	}else{
		printf("If one of number is not even, sum will not calculated\n");
	}
	return 0;
}

